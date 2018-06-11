#include<stdio.h>
#define ll long long

int main()
{
    ll t,j,i,n,b,max;
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld%",&n);
        ll a[101]={0};
        max=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&b);
            a[b]=1;
            if(b>max)
                max=b;
        }
        b=0;
        for(i=1;i<=max;i++)
        {
            if(a[i]==1)
                b++;
        }
        printf("%lld\n",b);
    }
    return 0;
}