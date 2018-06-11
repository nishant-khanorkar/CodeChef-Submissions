#include <iostream>
#include <math.h>
using namespace std;
#define ll long long
int main() 
{
	ll t,h;
	cin>>t;
	while(t--)
	{
	    cin>>h;
	    cout<<(ll)pow(2,h-1)%1000<<endl;
	}
	return 0;
}