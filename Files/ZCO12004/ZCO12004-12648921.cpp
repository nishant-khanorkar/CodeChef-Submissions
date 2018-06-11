#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll min(ll a,ll b)
{
     if(a<=b)
          return a;
     else
          return b;
}
int main()
{
	ll n,a[1000001],add[1000001],i,sum=0,min1,min2;

	cin>>n;
	for(i=0;i<3;i++)
	     cin>>a[i];

	add[1]=a[1];
	add[2]=a[2];
	for(i=3;i<n;i++)
	{
	     cin>>a[i];
	     add[i]= a[i] + min(add[i-1],add[i-2]);
	}
	min1= a[0] + min(add[n-1],add[n-2]);


	add[0]=a[0];
	add[1]=a[1];
	for(i=2;i<n-1;i++)
	{
	     add[i]= a[i] + min(add[i-1],add[i-2]);
	}
	min2= a[n-1] + min(add[n-2],add[n-3]);

	sum=min(min1,min2);
	cout<<sum<<endl;
	return 0;
}
