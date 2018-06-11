#include<stdio.h>
#include<math.h>
#define ll long long
#define ld long double
#define lg(a) log10(a+1e-8)
#define sd(a) scanf("%d",&a)
#define slld(a) scanf("%lld",&a)
#define ini(a,b) a=b
#define inc(a) a=a+1
#define dec(a) a=a/10
#define cal(a,b,c) a=(b*c)-floor(b*c)
int main()
{
        ll X,Y,num,j;
        int i,N,cnt;
	ld expf,K;
	sd(N);
	for(ini(i,1);i<=N;inc(i))
	{
		slld(X);
		slld(Y);
		ini(num,Y);
		for(ini(cnt,0);num>0;inc(cnt))
			dec(num);

                ini(K,lg(X));

		for(ini(j,1);;inc(j))
		{
			cal(expf,j,K);
			if((ll) pow((ld)10.0,(ld)expf+cnt-1) ==Y)
				break;
		}
		printf("Case %d: %lld\n",i,j);
        }
        return 0;
}
