#include<stdio.h>

int main()
{
    long long int cnt,n,t,i,a[21];
    scanf("%lld",&t);
    a[0]=1;
    for(i=1;i<=20;i++)
       a[i]=i*a[i-1]; 
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}