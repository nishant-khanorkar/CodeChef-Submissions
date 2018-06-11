#include<stdio.h>
#include<math.h>

#define ll long long
#define ld long double
#define db double

#define sd(a) scanf("%d",&a)
#define slld(a) scanf("%lld",&a)
#define sldd(a) scanf("%Lf",&a)
#define pldd(a) printf("%0.10Lf\n",a)
#define fast(a,b,c) for(a=b;a<=c;a++)

int main()
{
	int T,i,y,ch;
	char a[52];
	ll K,j;

	y = 103993;

	fast(j,1,2)
		y = (y % 33102)*10;

	fast(j,0,50)
	{
		ch=y/33102;
		a[j]=ch+48;
		y = (y % 33102)*10;
	}
	a[j]='\0';


	sd(T);

	fast(i,1,T)
	{
		slld(K);

		if(K==0)
			printf("3");
		else
			printf("3.1");

		ch=(K-1)/51;

		fast(j,1,ch)
			printf("%s",a);

		ch=(K-1)%51;

		fast(j,0,ch-1)
			printf("%c",a[j]);

		printf("\n");

	}
	return 0;
}