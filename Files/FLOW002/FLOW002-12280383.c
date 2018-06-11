#include <stdio.h>

int main()
{
   long long int a,b,i,n;
   scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {    
       scanf("%lld%lld",&a,&b);
        printf("%lld\n",a%b);
    }
    return 0;
}