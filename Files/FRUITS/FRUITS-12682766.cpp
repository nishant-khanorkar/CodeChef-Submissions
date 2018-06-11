#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,m,k,l;
	cin>>t;
	while(t--)
	{
	     cin>>n>>m>>k;
	     l=abs(n-m);
	     if(l<=k)
	          cout<<0<<endl;
	     else
	          cout<<l-k<<endl;
	}
	return 0;
}