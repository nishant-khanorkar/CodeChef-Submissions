#include<stdio.h>


int main()
{
    long long int t,i,k;
    float n;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f%lld",&n,&k);
        if(n>1000.000000)
            printf("%f\n",n*k*0.9);
        else
            printf("%f\n",n*k);
    }
    return 0;
}