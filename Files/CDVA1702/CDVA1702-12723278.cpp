#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
#define ll long long
 
ll fast_exp(ll base, ll exp0) 
{
    ll res=1;
    while(exp0>0) 
    {
       if(exp0%2==1) 
          res=(res*base);
       base=(base*base);
       exp0/=2;
    }
    return res;
} 
 
int main() 
{
	ll t,n,i,a,b,c,k,p,j,sum,count;
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     sum=n+1;
	     count=1;
	     b=(ll)log2(n+1);
	     for(i=2;i<=b;i++)
	     {
	          j=(ll)(pow(n*1.0,(1.0/(1.0*i)))+1e-9);
	          a=j-100 < 2 ? 2 : j-100;
	          p=j+100 > n ? n : j+100;
	          for(k=p;k>=a;k--)
     	          if( fast_exp(k,i)==n)
     	          {
     	               if(i%2==0)
     	               {
          	               sum=sum+k+i-k+i;
          	               count+=2;
     	               }
     	               else
     	               {
     	                    sum=sum+k+i;
          	               count++;
     	               }
     	               break;
     	          }
	     }
	     cout<<count<<endl<<sum<<endl;
	}
	
	return 0;
}