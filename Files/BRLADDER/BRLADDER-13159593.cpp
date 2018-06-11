#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll t,m,n,x,y,i;
	cin>>t;
	while(t--)
	{
	     cin>>m>>n;
	     
          if(m%2==1)
          {
               if(n+2==m ||n-1==m || n-2==m)
               {
                    cout<<"YES\n";
                    continue;
               }
               else
               {
                    cout<<"NO\n";
                    continue;
               }
          }
          else
          {
               if(n+2==m ||n+1==m || n-2==m)
               {
                    cout<<"YES\n";
                    continue;
               }
               else
               {
                    cout<<"NO\n";
                    continue;
               }
          }
	}
	return 0;
}