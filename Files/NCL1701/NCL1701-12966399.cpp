#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	ll t,n;
	char a[100005];
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     cin>>a;
	     sort(a,a+n);
	     cout<<a<<endl;
	}
	return 0;
}