#include<stdio.h>
#include<stdio.h>
     
#define ll long long
     
int main() 
{
        int gg;
        ll i,j,x,y,p,q,m;
        scanf("%d",&gg);
        while(gg--)
        {
            scanf("%lld%lld",&p,&q);
            if(p<=q)
            {
                printf("0\n");
                continue;
            }
            i=p/2;
            j=p-i;
            if(j%q!=0)
            {
                y=j%q;
                x=q-y;
            }
            else
                x=y=0;
            p=(i-x)*(j+x)/q;
            m=(i+y)*(j-y)/q;
            if(p>m)
               printf("%lld\n",p); 
            else
               printf("%lld\n",m);
        }
    	return 0;
}