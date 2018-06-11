#include<stdio.h>
int main()
{
    long long int cnt,n,t,i,d;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=n%10;
        while(n>0)
        {
            d=n%10;
            n=n/10;
        }
        cnt+=d;
        printf("%lld\n",cnt);
    }
    return 0;
}