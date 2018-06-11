#include<stdio.h>
#include<math.h>
     
#define ll long long

int main() 
{
    	ll gg,hh,yy,kk,x,y;
    	scanf("%lld",&yy);
    	while(yy--)
    	{
    	     scanf("%lld%lld%lld",&gg,&hh,&kk);
    	     x=gg/kk;
    	     y=hh/kk;  
    	     if(gg%kk!=0)
    	          x++;
    	     printf("%lld\n",y-x+1);
    	}
    	return 0;
}