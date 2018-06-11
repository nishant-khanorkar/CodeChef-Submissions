#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
int main()
{
     ll t,n,i,a[100005],count;
    
     slld(t);
     while(t--)
     {
          slld(n);
          count=0;
          for(i=0;i<n;i++)
          {
               slld(a[i]);
               if(a[i]==0)
                    count+=1000;
          }
          for(i=0;i<n;i++)
               if(a[i]==0)
                    break;
          count += (n-i)*100;
          printf("%lld\n",count);
     }
     return 0;
}