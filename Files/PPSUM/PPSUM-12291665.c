#include<stdio.h>

int main()
{
    long long int sum,n,t,i,d,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&d,&n);
        for(j=1;j<=d;j++)
        {
            sum=0;
            for(k=1;k<=n;k++)
            {
                sum += k;
            }
            n=sum;
        }
        printf("%lld\n",n);
    }
    return 0;
}