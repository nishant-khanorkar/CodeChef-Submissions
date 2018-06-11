#include <iostream>
using namespace std;

#define ll long long
int main() 
{
	char a[1000005];
	ll t,n,i,zeroes,conseqZero,conseqTemp;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     
	     zeroes=0;
	     for(i=0;i<n;i++)
	     {
	          scanf(" %c",&a[i]);
	          zeroes += (a[i]=='0');
	     }
	     
	     conseqZero=0;
	     conseqTemp=0;
	     for(i=0;i<n;i++)
	     {
	          if(a[(i-1+n)%n]=='1' && a[i]=='0')
	          {
	               conseqTemp=1;
	               while(a[(i+1)%n]=='0')
	               {
	                    conseqTemp++;
	                    i++;
	               }
	               if(conseqTemp>conseqZero)
	                    conseqZero=conseqTemp;
	          }
	     }
	     cout<<zeroes-conseqZero<<endl;
	}
	return 0;
}