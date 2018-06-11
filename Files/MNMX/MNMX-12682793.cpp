#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,m,k,i,j,l,a[50001];
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     for(i=0;i<n;i++)
	          cin>>a[i];
	    
	     sort(a,a+n);
	          
	     cout<<a[0]*(n-1)<<endl;
	}
	return 0;
}