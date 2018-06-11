#include <stdio.h>

int main() 
{
	int ss,gg;
	scanf("%d",&gg);
	while(gg--)
	{
	     scanf("%d",&ss);
	     ss+=400;
	     while(ss-->400)
	          printf("%d ",ss);
	     printf("\n");
	}
	return 0;
}