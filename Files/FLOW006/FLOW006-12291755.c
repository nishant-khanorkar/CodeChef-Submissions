#include<stdio.h>

int main()
{
    long long int cnt,n,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=0;
        while(n>0)
        {
            cnt=cnt+n%10;
            n/=10;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}