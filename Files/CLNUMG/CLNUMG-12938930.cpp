#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t,n,m,i,sum,j;
	cin>>t;
	while(t--)
	{
	     cin>>n>>m;
	     sum=0;
	     j=1;
	     for(i=1;i<n;i++)
	     {
	          sum+=j;
	          j=j*2;
	     }
	     for(i=0;i<m;i++)
	          j=j*2;
	          
	     sum+=j;
	     cout<<sum<<endl;
	}
	return 0;
}