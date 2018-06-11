#include <iostream>
using namespace std;
#define ll long long

int main() 
{
	ll t,n,a[10005],b[10005],i,j,x,flag;
	
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     for(i=0;i<n;i++)
	          cin>>a[i];
	     
	     flag=0;
	     
	     for(j=0;j<n;j++)
	     {
	          cin>>b[j];
	          
	          if(a[j]<=b[j])
     	          flag=1;
	     }
	     
	     for(x=1;;x++)
	     {
	          for(i=0;i<n;i++)
	               if(x%a[i]!= b[i])
	                    break;
	          if(i==n)
	               break;
	     }
	     
	     if(flag==0)
	          cout<<x<<endl;
	     else
	          cout<<0<<endl;
	}

	return 0;
}