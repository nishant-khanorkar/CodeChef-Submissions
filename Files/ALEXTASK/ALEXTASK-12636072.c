#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)

ll gcd(ll a,ll b)
{
     if(b==0)
          return a;
     else
          return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
     return ((a*b)/gcd(a,b));
}

int main()
{
     ll t,n,fr,l,i,j,a[501];
     slld(t);
     while(t--)
     {
          slld(n);
          for(i=0;i<n;i++)
               slld(a[i]);
          
          fr=lcm(a[0],a[1]);
          
          for(i=1;i<n;i++)
               for(j=0;j<i;j++)
               {
                    l=lcm(a[i],a[j]);
                    if(l<fr)
                         fr=l;
               }
          
          printf("%lld\n",fr);
     }
     return 0;
}