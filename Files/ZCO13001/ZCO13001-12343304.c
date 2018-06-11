#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a) scanf("%lld",&a);
#define plld(a) printf("%lld",a);

ll cmpfunc(const void *a,const void *b)
{
    return(*(ll *)a - *(ll *)b);
}

int main()
{
    ll N,i,x[200001],sum=0;
    slld(N);

    for(i=0;i<N;i++)
        slld(x[i]);

    qsort(x,N,sizeof(ll),cmpfunc);

    for(i=0;i<N;i++)
        sum = sum - x[i]*(N-2*i-1);
        //sum = sum - x[i]*(N-i-1) + x[i]*(i-0);

    plld(sum);
    return 0;
}
