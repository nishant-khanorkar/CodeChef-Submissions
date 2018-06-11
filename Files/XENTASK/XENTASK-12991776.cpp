#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,i,x,ss12,ss21;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     ss12=ss21=0;
	     for(i=0;i<n;i++)
	     {
	          cin>>x;
	          if(i%2==0)
	               ss12+=x;
	          else
	               ss21+=x;
	     }
	     for(i=0;i<n;i++)
	     {
	          cin>>x;
	          if(i%2==0)
	               ss21+=x;
	          else
	               ss12+=x;
	     }
	     cout<<(ss12<ss21 ? ss12 : ss21)<<endl;
	}
	return 0;
}