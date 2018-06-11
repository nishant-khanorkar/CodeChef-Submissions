#include<stdio.h>

int main()
{
    long long int cnt,n,t,i,j,flag;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        flag=1;
        for(j=2;j<=n/2;j++)
        {
            if(n%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1&&!(n==0||n==1))
            printf("yes\n");
        else
            printf("no\n");
            
    }
    return 0;
}