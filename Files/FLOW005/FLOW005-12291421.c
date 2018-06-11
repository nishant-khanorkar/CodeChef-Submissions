#include<stdio.h>

int main()
{
    long long int cnt,n,t,i;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=n/100;  n=n%100;
        cnt+=n/50;   n=n%50;
        cnt+=n/10;   n=n%10;
        cnt+=n/5;   n=n%5;
        cnt+=n/2;   n=n%2;
        cnt+=n;
        printf("%lld\n",cnt);
    }
    return 0;
}