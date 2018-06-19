#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     vector<ll> pr(1000005,0);
     int i,j;
     for(i=2;i<=1000000;i++)
          if(!pr[i])
               for(j=i+i;j<=1000000;j+=i)
                    pr[j]++;
     
     for(i=2;i<=1000000;i++)
          if(!pr[i])
               pr[i]=1;
          
     int t,n,m;
     cin>>t;
     while(t--)
     {
          cin>>n>>m;
          ll y=0;
          for(i=n;i<m;i++)
               y+=pr[i];
          cout<<y<<endl;
     }
     return 0;
}   
