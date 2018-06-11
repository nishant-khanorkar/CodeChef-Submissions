#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll n,a[100005],b[100005],u,q,i,x,y,sum,temp;;
	char ch;
	cin>>n;
	for(i=1;i<=n;i++)
	     cin>>a[i];
	cin>>q;
	while(q--)
	{
	     cin>>ch>>x>>y;
	     
	     if(ch=='A')
	     {
	          if(x<1 || y>n || x>y)
	          {
     	          cout<<"NA\n";
     	          continue;
	          }
	          sum=0;
	          for(i=x;i<=y;i++)
	               sum+=a[i];
	          cout<<sum<<endl;
	          continue;
	     }
	     if(ch=='M')
	     {
	          if(x<1 || y>n || x>y)
     	     {
     	          cout<<"NA\n";
     	          continue;
     	     }
	          temp=a[x];
	          for(i=x;i<=y;i++)
	               if(a[i]>temp)
	                    temp=a[i];
	          cout<<temp<<endl;
	          continue;
	     }
	     if(ch=='m')
	     {
	          if(x<1 || y>n || x>y)
     	     {
     	          cout<<"NA\n";
     	          continue;
     	     }
	          temp=a[x];
	          for(i=x;i<=y;i++)
	               if(a[i]<temp)
	                    temp=a[i];
	          cout<<temp<<endl;
	          continue;
	     }
	     if(ch=='S')
	     {
	          if(x==y || x<1 || y>n || x>y)
	          {
	               cout<<"NA\n";
	               continue;
	          }
	          u=0;
	          for(i=x;i<=y;i++)
	               b[u++]=a[i];
	          sort(b,b+u);
	          cout<<b[u-2]<<endl;
	          continue;
	     }
	     if(ch=='s')
	     {
	          if(x==y || y>n || x>y)
	          {
	               cout<<"NA\n";
	               continue;
	          }
	          u=0;
	          for(i=x;i<=y;i++)
	               b[u++]=a[i];
	          sort(b,b+u);
	          cout<<b[1]<<endl;
	          continue;
	     }
	     if(ch=='U')
	     {
	          if(x<1 || x>n)
	          {
	               cout<<"NA\n";
	               continue;
	          }
	          a[x]=y;
	          continue;
	     }
	     cout<<"!!!"<<endl;
	}
	return 0;
}