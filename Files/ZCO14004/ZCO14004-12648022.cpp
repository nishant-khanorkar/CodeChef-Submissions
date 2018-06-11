#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll min(ll a,ll b,ll c)
{
     if(a<=b && a<=c)return a;
     if(b<=a && b<=c)return b;
     if(c<=a && c<=b)return c;
}
int main()
{
	ll n,a,add[200001],i,sum=0;

	cin>>n;
	for(i=0;i<3;i++)
	{
	     cin>>add[i];
	     sum+=add[i];
	}

	for(i=3;i<n;i++)
	{
	     cin>>a;
	     add[i]= a + min(add[i-1],add[i-2],add[i-3]);
	     sum+=a;
	}
	sum -= min(add[n-1],add[n-2],add[n-3]);
	cout<<sum<<endl;
	return 0;
}
