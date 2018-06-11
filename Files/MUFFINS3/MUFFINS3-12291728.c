#include<stdio.h>

int main()
{
    long long int n,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",(long long int)n/2 + 1);  
    }
    return 0;
}