#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,k,i,s,p;
	cin>>t;
	while(t--)
	{
	     cin>>n>>k;
	     s=0;
	     for(i=0;i<n;i++)
	     {
	          cin>>p;
	          s+=p;
	     }
	     for(i=1;i<k;i++)
	          s=2*s+1;
	     if(s%2==0)
	          cout<<"odd\n";
	     else
	          cout<<"even\n";
	}
	return 0;
}