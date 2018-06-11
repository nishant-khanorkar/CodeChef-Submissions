#include <bits/stdc++.h>
#include <string.h>
using namespace std;

#define ll long long

int main() 
{
	ll t,n,i,j,l;
	char a[20],b[20];
	cin>>t;
	while(t--)
	{
	     cin>>a;
	     cin>>b;
	     
	     l=strlen(a);
	     
	     ll s[l]={0};
	     
	     for(i=0;i<l;i++)
	          if(a[i]==b[i]||a[i]=='?'||b[i]=='?')
	               s[i]=1;
	         
	     for(i=0;i<l;i++)
	          if(s[i]==0)
	          {
	               cout<<"No"<<endl;
	               goto BRO;
	          }
	          
	     cout<<"Yes"<<endl;
	     BRO:;
	}
	return 0;
}