#include<stdio.h>
#include<math.h>
#define ll long long

#define sd(a) scanf("%d",&a)
#define slld(a) scanf("%lld",&a)
#define plld(a) printf("%lld\n",a)
#define fast(a,b,c) for(a=b;a<=c;a++)

int main()
{
	int i,T;
	ll j,k,cnt,n,m,c;
	sd(T);
	if(T>100)
		T=100;

	fast(i,1,T)
	{
		slld(n);	slld(m);	slld(c);

		cnt=0;

		fast(j,1,c)
		{
			if(c%j == 0)
			{
				k=c/j;

				if(j<=n && k<=m)
					cnt++;
			}
		}
		
		plld(cnt);
	}
	return 0;
}