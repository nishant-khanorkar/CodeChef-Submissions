#include<stdio.h>
#include<math.h>
#define ll long long

ll nCr(ll n,ll r)
{
     if(2*r>n)
          r=n-r;
     long long ncr=1;
     for(int i=1;i<= r;i++)
     {
          ncr*=n-r+i;
          ncr/=i;
     }
     return ncr;
}

int main()
{
    	int gg,i,j,x;
    	ll sum,p,y;
    	scanf("%d",&gg);
    	while(gg--)
    	{
    	     scanf("%lld%lld",&p,&y);
    	     printf("%lld\n",nCr(p+y-1,y-1));//Stars and bars (combinatorics)
    	}
    	return 0;
}
