#include<stdio.h>

#define ll long long
#define slld(a) scanf("%lld",&a);
#define slld1(a,b) scanf("%lld%lld",&a,&b);
#define plld(a) printf("%lld",a);


int main()
{
    ll N,K,i,j,x,dep=0,depPos=0,maxDepLen=0,maxLen=0,maxLenPos=0,c=0;
    slld(N);

    for(i=1;i<=N;i++)
    {
        slld(x);
        if(x==1)
            c++;
        else
            c--;

        if(dep<c)
        {
            dep=c;
            depPos=i;
        }

        maxDepLen++;
        if(maxDepLen>maxLen)
        {
            maxLen=maxDepLen;
            maxLenPos=i;
        }

        if(c==0)
            maxDepLen=0;

    }
    printf("%lld %lld %lld %lld",dep,depPos,maxLen,maxLenPos-maxLen+1);
    return 0;
}
