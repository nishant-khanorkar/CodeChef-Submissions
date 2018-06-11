#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t,n,a[1005],i,sum,z,x1,x2,y,max;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     cin>>a[1];
	     max=a[1];
	     for(i=2;i<=n;i++)
	     {
	          cin>>a[i];
	          if(max<a[i])
	               max=a[i];
	     }
	     sum=max*n;
	     
	     z=a[1];
	     for(i=1;i<=n;i++)
	     {
	          if(a[i]==max)
	          {
	               x1=i;
	               break;
	          }
	          
	          sum-=a[i];
	          
	          if(a[i]<=z)
	          {
	               sum-=(max-z);
	               continue;
	          }
	          if(a[i]>z)
	          {
	               sum-=(max-a[i]);
	               z=a[i];
	          }
	     }
	     z=a[n];
	     for(i=n;i>=1;i--)
	     {
	          if(a[i]==max)
	          {
	               x2=i;
	               break;
	          }
	          
	          sum-=a[i];
	          
	          if(a[i]<=z)
	          {
	               sum-=(max-z);
	               continue;
	          }
	          if(a[i]>z)
	          {
	               sum-=(max-a[i]);
	               z=a[i];
	          }
	     }
	     
	     for(i=x1;i<=x2;i++)
	          sum-=a[i];
	          
	    cout<<sum<<endl;
	}
	return 0;
}