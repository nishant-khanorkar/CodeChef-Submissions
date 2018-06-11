#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a)  scanf("%lld",&a)
#define slld1(a,b)  scanf("%lld%lld",&a,&b)
#define plld(a)  printf("%lld ",a)

ll cmpfunc(const void *a, const void *b)
{
    return(*(ll *)a - *(ll *)b);
}

int main()
{
    ll N,x[65005],i,j,c=0,K,t;

    slld1(N,K);
    for(i=0;i<N;i++)
        slld(x[i]);

    qsort(x,N,sizeof(ll),cmpfunc);

    for(i=N-1,j=N-2;j>-1 && j<i;)
    {
        t=x[i]-x[j];
        if( t >= K)
        {
            c += j+1;
            i--;
            if(i==j)
                j--;
        }
        else
            j--;
    }
    plld(c);
    return 0;
}
