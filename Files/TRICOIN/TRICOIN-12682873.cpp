#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,i,j,l;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     for(i=0 ; ; i++)
	          if( (i*(i+1)/2) > n )
	               break;
	     cout<<i-1<<endl;
	}
	return 0;
}