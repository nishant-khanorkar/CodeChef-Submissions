#include<stdio.h>
#include<math.h>

int main()
{
    long long int cnt,n,t,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        cnt=0;
        for(j=12;j>0;j--)
        {
            k=pow(2,j-1);
            cnt+=n/k;   n=n%k;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}