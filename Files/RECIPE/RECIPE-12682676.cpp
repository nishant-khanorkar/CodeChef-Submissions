#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main() 
{
	ll t,n,a[50],i,j,p;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     cin>>a[0];
	     p=a[0];
	     for(i=1;i<n;i++)
	     {
	          cin>>a[i];
	          p=gcd(p,a[i]);
	     }
	     for(i=0;i<n;i++)
	               cout<<a[i]/p<<" ";
          cout<<endl;
	}
	return 0;
}