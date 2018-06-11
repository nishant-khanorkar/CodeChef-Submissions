#include <iostream>
#include <string.h>
using namespace std;
#define ll long long

int main() 
{
	ll n,i,l,odd;
	char a[10005],ch;
	cin>>n;
	while(n--)
	{
	     ll g[27]={0},h[27]={0};
	     cin>>a;
	     l=strlen(a);
	     for(i=0;i<l;i++)
	     {
	          ch=a[i];
	          if(ch>='a' && ch<='z')
	          {
	               g[ch-'a']++;
	               continue;
	          }
	          else
	               h[ch-'A']++;
	     }
	     if(l%2==0)
	     {
     	     for(i=0;i<26;i++)
     	     {
     	          if((g[i]+h[i])%2==1)
     	               goto DDD;
     	     }
	     }
	     else
	     {
	          odd=0;
	          for(i=0;i<26;i++)
     	     {
     	          if((g[i]+h[i])%2==1)
     	          {
     	               odd++;
     	               if(odd>1)
     	                    goto DDD;
     	          }
     	     }
	     }
	     cout<<"Yes"<<endl;
	     continue;
	     DDD:cout<<"No"<<endl;
	}
	return 0;
}