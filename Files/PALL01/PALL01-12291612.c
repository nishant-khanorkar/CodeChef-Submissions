#include<stdio.h>

int main()
{
    long long int cnt,n,t,i,d,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=0;
        k=n;
        while(k>0)
        {
            cnt=10*cnt+k%10;
            k=k/10;
        }
        if(n==cnt)
            printf("wins\n");
        else
            printf("losses\n");
    }
    return 0;
}