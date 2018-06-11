#include<stdio.h>
#include<math.h>
#define ll long long

int main() 
{
     int gg,i;
     ll p;
     double u;
     scanf("%d",&gg);
     while(gg--)
     {
          scanf("%lld",&p);
          for(i=1,u=1.0;u>0.5;i++)
               u*=(p*1.0-i)/p;
          printf("%d\n",i-1);
    	}
    	return 0;
}