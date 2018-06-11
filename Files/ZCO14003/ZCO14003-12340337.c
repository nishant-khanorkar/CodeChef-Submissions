#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a)  scanf("%lld",&a)
#define plld(a)  printf("%lld\n",a)
#define fast(a,b,c) for(a=b;a<=c;a++)

ll cmpfunc(const void *a,const void *b)
{
    return(*(ll *)a - *(ll *)b);
}

int main()
{
    ll N,ar[500005],i,max,t;

    slld(N);
    fast(i,0,N-1)
        slld(ar[i]);

    qsort(ar,N,sizeof(ll),cmpfunc);
    max=0;
    for(i=N-1;i>=0;i--)
    {
            t=ar[i]*(N-i);
        if(t>max)
            max=t;
    }
    plld(max);

    return 0;
}
