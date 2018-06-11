#include<stdio.h>

#define ld long double
#define db double

#define sd(a) scanf("%d",&a)
#define sldd(a) scanf("%Lf",&a)
#define pldd(a) printf("%0.10Lf\n",a)
#define fast(a,b,c) for(a=b;a<=c;a++)

int main()
{
	int T,N,t,i,j;
	ld p,timep;

	sd(T);
	fast(i,1,T)
	{
		sd(N);
		timep=0.0;
		fast(j,1,N)
		{
			sd(t);	sldd(p);
			timep = (ld)(timep + t) / p;
		}
		pldd(timep);
	}
	return 0;
}