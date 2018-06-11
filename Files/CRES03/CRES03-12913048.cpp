#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	char a[105];
	ll n,k,i;
	cin>>n;
	cin>>a;
	cin>>k;
	for(i=0;i<n;i++)
	{
	     if(a[i]>='a' && a[i]<='z')
	     {
	          a[i] = 'a' + (a[i] - 'a' + k) % 26 ;
	          cout<<a[i];
	          continue;
	     }
	     if(a[i]>='A' && a[i]<='Z')
	     {
	          a[i] = 'A' + (a[i] - 'A' + k) % 26 ;
	          cout<<a[i];
	          continue;
	     }
	     
	     cout<<a[i];
	}
	return 0;
}