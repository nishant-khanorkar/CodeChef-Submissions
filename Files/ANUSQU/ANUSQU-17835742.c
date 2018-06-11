#include<stdio.h>
#include<math.h>
#define ll long long

int main()
{
    	int gg,i,j,x,y;
    	scanf("%d",&gg);
    	y=ceil(sqrt(gg));
    	x=gg/y;
    	gg-=y*x;
    	j=2*y+2*x+(gg>0?2:0);
    	printf("%d",j);
    	return 0;
}
