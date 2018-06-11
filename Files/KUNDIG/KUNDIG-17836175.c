#include<stdio.h>
#include<math.h>
#define ll long long

ll fc(ll i)
{
     return i==0?1:i*fc(i-1);
}

int main()
{
    	int gg,i,j,x;
    	ll sum,p,y;
    	scanf("%d",&gg);
    	while(gg--)
    	{
    	     scanf("%d",&x);
    	     y=0;
    	     for(i=0;i<x;i++)
    	     {
    	          scanf("%d",&j);
    	          y+=j;
    	     }
    	     p=fc(x-1)*y;
    	     sum=0;
    	     while(x>0)
    	     {
               sum=sum*10+p;
               x--;
    	     }
    	     printf("%lld\n",sum);
    	}
    	return 0;
}
