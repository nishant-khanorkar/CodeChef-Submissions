#include <stdio.h>

int main()
{
    long long int a;
    while(1)
    {
        scanf("%lld",&a);
        if(a == 42)
            break;
        printf("%lld\n",a);
    }
    return 0;
}