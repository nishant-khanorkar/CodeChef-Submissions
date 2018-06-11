#include<stdio.h>

int main()
{
    long long int n,t,i,d;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&d,&n);
        if(d<n)
            printf("<\n");
        else if(d>n)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}