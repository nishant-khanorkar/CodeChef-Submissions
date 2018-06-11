#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
int main()
{
     ll n,a,b,s1=0,s2=0,max=0,k=1;
    
     slld(n);
     while(n--)
     {
          slld1(a,b);
          s1+=a,s2+=b;
          if(abs(s1-s2)>max)
          {
               max=abs(s1-s2);
               k= s1>s2 ? 1 : 2 ;
          }
     }
     printf("%lld %lld\n",k,max);
     return 0;
}