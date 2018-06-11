#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int t,n,a[10001],i,j,b[10001],c[10001],p,q;
     cin>>t;
     for(j=1;j<=t;j++)
     {
          cin>>n;
          for(i=0;i<n;i++)
          {
               cin>>a[i];
               p=a[i];
               c[i]=p>>16;
               b[i]=p - (c[i]<<16);
          }
          cout<<"Case "<<j<<":"<<endl;
          for(i=0;i<n;i++)
               cout<<b[i]<<" ";
          cout<<endl;
          for(i=0;i<n;i++)
               cout<<c[i]<<" ";
          cout<<endl;
     }
	return 0;
}