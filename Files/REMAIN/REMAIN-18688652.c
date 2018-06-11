#include<stdio.h>

int main()
{
	int tt;
	long long int nn,mm;
	scanf("%d",&tt);
	while(tt--)
	{
		scanf("%lld%lld",&nn,&mm);
		if((nn%mm)%2==0)
			printf("EVEN\n");
		else
			printf("ODD\n");
	}
	return 0;
}