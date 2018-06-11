#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
typedef struct pop
{
    ll pi,pos;
}pop;
 
ll cmpfunc1(const void *a,const void *b)
{
   
  pop *a1= (pop *)a;
  pop *b1= (pop *)b;
    return(a1->pi - b1->pi);
}
 
ll comp(const void* p1, const void* p2) {
  ll* arr1 = (ll*)p1;
  ll* arr2 = (ll*)p2;
  ll diff1 = arr1[0] - arr2[0];
  if (diff1) 
    return diff1;
  return arr1[1] - arr2[1];
}
 
 
int main()
{
    ll t,n,l,i,j,p,q,k,g,ss[100001][2];
    pop a[50002];
    
    slld(t);
    for(i=1;i<=t;i=i+1)
    {
        slld(n);
        for(j=0;j<n;j=j+1)
        {
            slld(a[j].pi);
            a[j].pos=j+1;
        }
        k=2*n-2;
        for(j=0;j<k;j=j+2)
        {
            slld1(ss[j][0],ss[j][1]);
            ss[j+1][0]=ss[j][1];
            ss[j+1][1]=ss[j][0];
        }
        ss[j][0]=-1;
        qsort(a,n,sizeof(pop),cmpfunc1);   
        qsort(ss,k,sizeof(ss[0]),comp);   
        
        g=0;   
        for(j=1;j<=n;j=j+1)
        {
            int vv[50001]={0};
            vv[j]=1;
            for(l=g;ss[l][0]==j;l++)
            {
                vv[ss[l][1]]=1;
            }
            g=l;
            for(l=n-1;l>=0;l=l-1)
                if(vv[a[l].pos]==0)
                {
                    printf("%lld ",a[l].pos);
                    goto ZOOM;
                }
            printf("0 ");
            ZOOM:;
        }
        printf("\n");
    }
    return 0;
}