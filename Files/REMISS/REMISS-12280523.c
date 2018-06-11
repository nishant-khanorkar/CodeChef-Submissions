#include <stdio.h>
#include<math.h>

int main()
{
   long long int a,b,i,n;
    scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {    
        scanf("%lld%lld",&a,&b);
        printf("%lld %lld\n",a>b?a:b,a+b);    
    }
    return 0;
}