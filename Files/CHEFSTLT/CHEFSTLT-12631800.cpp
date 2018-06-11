#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,i,min,max,l;
	string s1,s2;
	cin>>t;
	while(t--)
	{
	     cin>>s1;
	     cin>>s2;
	     min=max=0;
	     l=s1.size();
	     for(i=0;i<l;i++)
	     {
	          if(s1[i]=='?' || s2[i]=='?')
	          {
	               max++;
	               continue;
	          }
	          if(s1[i]!=s2[i])
	          {
	               min++; max++;
	          }
	          
	     }
	     cout<<min<<" "<<max<<endl;
	}
	return 0;
}