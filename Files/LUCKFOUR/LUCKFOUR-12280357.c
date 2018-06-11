#include <stdio.h>
#define ll long long
#define slld(a,b) scanf("%lld%lld",&a,&b) 
#define slld1(a) scanf("%lld",&a) 
#define plld(a) printf("%lld\n",a)
#define fast(a,b,c) for(a=b;a<=c;a++)
int main()
{
    ll n,x,cnt,i;
    slld1(n);
    fast(i,1,n)
    {   
        cnt=0;
        slld1(x);
        while(x>0)
        {
            if(x%10==4)
                cnt++;
            x=x/10;
        }
             plld(cnt);
    }
   
  
    return 0;
}