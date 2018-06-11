#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t,n,s,sum,i,a;
	cin>>t;
	while(t--)
	{
	     cin>>n>>s;
	     sum=0;
	     for(i=0;i<n;i++)
	     {
	          cin>>a;
	          sum+=a;
	     }
	     if(sum <= (ll)(s/2))
	          cout<<"Yes\n";
	     else
	          cout<<"No\n";
	}
	return 0;
}