#include <stdio.h>
#define ll long long
int main() 
{
	int gg;
	ll xx,yy,zz;
	scanf("%d",&gg);
	while(gg--)
	{
	     scanf("%lld%lld",&xx,&yy);
	     zz=xx+yy;
	     printf("%lld\n",zz*(zz+1)/2 + xx+1);
	}
	return 0;
}