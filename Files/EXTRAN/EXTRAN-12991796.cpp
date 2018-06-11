#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,i,seq[100005];
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     
	     for(i=0;i<n;i++)
	          cin>>seq[i];
	          
	     sort(seq,seq+n);
	     
	     if(seq[0]+1 != seq[1])
	     {
	          cout<<seq[0]<<endl;
	          continue;
	     }
	     if(seq[n-2]+1 != seq[n-1])
	     {
	          cout<<seq[n-1]<<endl;
	          continue;
	     }
	     for(i=1;i<n;i++)
	          if(seq[i-1] == seq[i])
	          {
	               cout<<seq[i]<<endl;
	               break;
	          }
	}
	return 0;
}