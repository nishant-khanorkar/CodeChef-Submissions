#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define M 1000000007

int cmp(const void* p1, const void* p2) 
{
     return *(ll *)p1 < *(ll *)p2 ? 1 : -1 ;
}

int main() 
{
	ll gg,xx,yy,zz,i,j,ne[100005],sPo,sNo,max;
	scanf("%lld",&gg);
	while(gg--)
	{
	     scanf("%lld",&xx);
	     
	     yy=0;
	     zz=0;
	     
	     sPo=0;
	     sNo=0;
	     
	     for(i=0;i<xx;i++)
	     {
	          scanf("%lld",&j);
	          if(j>=0)
	          {
	               yy++;
	               sPo+=j;
	          }
	          else
	          {
	               ne[zz++]=j;
	               sNo+=j;
	          }
	     }
	     
	     max=sPo*yy+sNo;
	     
	     qsort(ne,zz,sizeof(ll),cmp);
	     
	     for(i=0;i<zz;i++)
	     {
	          sPo+=ne[i];
	          yy++;
	          sNo-=ne[i];
	          j=sPo*yy+sNo;
	          if( j > max)
	               max=j;
	     }
	     
	     printf("%lld\n",max);
	}
	return 0;
}