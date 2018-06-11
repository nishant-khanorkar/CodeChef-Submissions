#include<stdio.h>

int main()
{
    long long int a,b,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",a+b);
            
    }
    return 0;
}