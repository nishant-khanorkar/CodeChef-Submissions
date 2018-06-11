#include<iostream>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,i,j,p,ser;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     ser=0;
	     for(i=0;i<n;i++)
	          for(j=0;j<n;j++)
	          {
	               cin>>p;
	               ser+=p;
	          }
	     ser=(n*n - ser)/2;
	     i=1;
	     while(ser>=i)
	     {
	          ser-=i;
	          i++;
	     }
	     cout<<n-i<<endl;
	}
	return 0;
}