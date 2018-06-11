#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a) scanf("%lld",&a);
#define slld1(a,b) scanf("%lld%lld",&a,&b);
#define plld(a) printf("%lld",a);

ll cmpfunc(const void *a,const void *b)
{
    return(*(ll *)a - *(ll *)b);
}

int main()
{
    ll N,K,i,j,x[100001],c=0;
    slld1(N,K);

    for(i=0;i<N;i++)
        slld(x[i]);

    qsort(x,N,sizeof(ll),cmpfunc);

    for(i=0,j=N-1;i<j;)
    {
        if((x[i]+x[j])< K)
        {
            c =c + j - i;
            i++;
        }
        else
            j--;

    }

    plld(c);
    return 0;
}
