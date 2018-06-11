#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
int main()
{
    ll t,n,l,i,j,p,q,a[11];
    slld(t);
    while(t--)
    {
          slld(n);
          for(j=1;j<=n;j++)
               slld(a[j]);
          for(j=1;j<=n;j++)     
               printf("%lld",a[j]);
          printf("\n");
    }
    
    return 0;
}