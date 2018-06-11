#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t,n,i,j,m,l,x1,y1,x2,y2,x,y;
	char k[15];
	
	cin>>t;
	while(t--)
	{
	     cin>>n>>m;
	     cin>>k;
	     l=strlen(k);
	     x=y=0;
	     x1=x2=y1=y2=0;
	     for(j=0;j<l;j++)
	     {
	          if(k[j]=='L')
	          {
	               x--;
	               if(x<x1)
	                    x1=x;
	               continue;
	          }
	          if(k[j]=='R')
	          {
	               x++;
	               if(x2<x)
	                    x2=x;
	               continue;
	          }
	          if(k[j]=='U')
	          {
	               y++;
	               if(y1<y)
	                    y1=y;
	               continue;
	          }
	          if(k[j]=='D')
	          {
	               y--;
	               if(y<y2)
	                    y2=y;
	               continue;
	          }
	    }
	    if(abs(y1-y2)<n && abs(x1-x2)<m)
	          cout<<"safe"<<endl;
	    else
	          cout<<"unsafe"<<endl;
	}
	return 0;
}