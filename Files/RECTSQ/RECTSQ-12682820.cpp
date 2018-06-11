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
	ll t,n,m,l;
	cin>>t;
	while(t--)
	{
	     cin>>n>>m;
	     
	     l=gcd(n,m);
	          
	     cout<<(n*m)/(l*l)<<endl;
	}
	return 0;
}