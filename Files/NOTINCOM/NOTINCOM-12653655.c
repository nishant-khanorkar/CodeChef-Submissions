#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)

int main()
{
    ll t,a,b,i,j,k,m;
    
    slld(t);
    while(t--)
    {
          slld1(a,b);
          ll p[1000001]={0};
          for(i=0;i<a;i++)
          {
               slld(m);
               p[m]++;
          }
          k=0;
          for(i=0;i<b;i++)
          {
               slld(m);
               if(p[m]>0)
                    k=k+1;
          }
          printf("%lld\n",k);
    }
    return 0;
}