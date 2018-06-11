#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,a[250001][2],i,j,s,p;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     for(i=1;i<=n;i++)
	     {
	          for(j=1;j<=n;j++)
	          {
	               cin>>p;
	               a[p][0]=i;
	               a[p][1]=j;
	          }
	     }
	     s=0;
	     n=n*n;
	     for(i=2;i<=n;i++)
	          s=s+abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]);
	     cout<<s<<endl;
	}
	return 0;
}