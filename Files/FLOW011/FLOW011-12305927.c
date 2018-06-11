#include<stdio.h>

#define ll long long
int main()
{
    ll b,i,n;
    double g;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&b);
        if(b<1500)
            printf("%g\n",b+0.1*b+0.9*b);
        else
            printf("%g\n",b+500+0.98*b);
    }
    return 0;
}