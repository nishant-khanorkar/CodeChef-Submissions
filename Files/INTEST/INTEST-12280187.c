#include <stdio.h>
#define ll long long
#define slld(a,b) scanf("%lld%lld",&a,&b) 
#define slld1(a) scanf("%lld",&a) 
#define plld(a) printf("%lld",a)
#define fast(a,b,c) for(a=b;a<=c;a++)
int main()
{
    ll n,k,i,x,cnt=0;
    slld(n,k);
    fast(i,1,n)
    {
        slld1(x);
        if(x%k==0)
            cnt++;
    }
    plld(cnt);
  
    return 0;
}