#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
	ll txtt,i,lenn,num0,num1,moved;
	char snow[100005];
	cin>>txtt;
	while(txtt--)
	{
	     cin>>snow;
	     lenn=strlen(snow);
	     num0=num1=moved=0;
	     for(i=1;i<lenn;i++)
	     {
	          if(snow[i-1]=='1')
	          {
	               num1++;
	               num0=0;
	               while(snow[i]=='0' && i<lenn)
	               {
	                    num0++;
	                    i++;
	               }
	               if(num0>0)
	                    moved+= (num1)*(num0+1);
	          }
	     }
	     cout<<moved<<endl;
	}
	return 0;
}