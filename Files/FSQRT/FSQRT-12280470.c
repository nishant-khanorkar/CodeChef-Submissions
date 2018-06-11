#include <stdio.h>
#include<math.h>

int main()
{
   long long int a,b,i,n;
   scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {    
       scanf("%lld",&a);
        printf("%lld\n",(long long int)floor(sqrt(a)));
    }
    return 0;
}