#include<stdio.h>
#include<stdlib.h>
#define ll long long
#define slld(a) scanf("%lld",&a);
#define plld(a) printf("%lld\n",a);


int main()
{
    ll N,t,i,j,x;
    slld(t);
    
    for(i=0;i<t;i++)
    {
        slld(N);
        ll c[100001]={0};
        for(j=0;j<N;j++)
        {
            slld(x);
            c[x]++;
        }
        for(j=1;j<=100000;j++)
            if(c[j]==1)
            {
                plld(j);
                break;
            }
    }

    return 0;
}