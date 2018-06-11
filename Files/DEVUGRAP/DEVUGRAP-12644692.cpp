#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,k,a,i,j,sum;
	
	cin>>t;
	while(t--)
	{
	     cin>>n>>k;
	     
	     sum=0;
	     for(i=0;i<n;i++)
	     {
	          cin>>a;
	          j=a%k;
	          
	          if(a>k)
	               sum += j>(k-j) ? (k-j) : j;
	          if(a<k)
	               sum += k-j;
	     }
	     cout<<sum<<endl;
	}
	return 0;
}