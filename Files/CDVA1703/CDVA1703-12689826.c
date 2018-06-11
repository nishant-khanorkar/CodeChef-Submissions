#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
int main()
{
     ll t,n,l,i,j,max,rem;
     
     slld(t);
     
     while(t--)
     {
          scanf("%lld%lld",&n,&l);
          i=n%l;
          
          if(i==0)
               i=l;

          printf("%lld\n",i);
     }
     
     return 0;
}