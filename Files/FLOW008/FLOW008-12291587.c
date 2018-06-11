#include<stdio.h>
int main()
{
    long long int n,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n<10)
            printf("What an obedient servant you are!\n");
        else
            printf("-1\n");
    }
    return 0;
}