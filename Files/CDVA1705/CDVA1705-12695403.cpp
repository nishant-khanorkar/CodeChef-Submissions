#include <map>
#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

const ll M = 1000000007; // modulo
map<ll, ll> F;

ll f(ll n) 
{
	if (F.count(n)) 
	     return F[n];
	ll k=n/2;
	
	if (n%2==0) 
		return (F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M);
	else 
		return (F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M);
}

ll fast_exp(ll base, ll exp) 
{
    ll res=1;
    while(exp>0) 
    {
       if(exp%2==1) 
          res=(res*base)%M;
       base=(base*base)%M;
       exp/=2;
    }
    return res%M;
}

int main()
{
	ll n,t,y,z;
	cin>>t;
	F[0]=F[1]=1;
	while (t--)
	{
     	cin >> n;
     	y=fast_exp(2,n);
     	z= n==1 ? 2 : f(n+1);
     	cout << (y-z + M )%M << endl;
	}
	return 0;
}