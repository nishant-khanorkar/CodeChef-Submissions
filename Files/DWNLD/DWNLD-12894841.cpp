#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t1,n,i,j,k,t[11],d[11],sum,k1;
	cin>>t1;
	while(t1--)
	{
	     cin>>n>>k;
	     sum=0;k1=k;;
	     for(i=0;i<n;i++)
	     {
	          cin>>t[i]>>d[i];
	          sum+=t[i]*d[i];
	          if(k>0)
	          {
	               sum=sum-d[i]*(t[i]<k ? t[i]:k);
	               k=k-(t[i]<k ? t[i]:k);
	          }
	     }
	     
	     cout<<sum<<endl;
	}
	return 0;
}