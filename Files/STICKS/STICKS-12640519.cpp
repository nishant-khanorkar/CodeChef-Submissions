#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll i,j,k,t,n,a[1001];
     
     cin>>t;
     while(t--)
     {
          
          cin>>n;
          ll b[1001]={0};
          k=-1;
          for(i=0;i<n;i++)
          {
               cin>>j;
               b[j]++;
               if(b[j]==2 || b[j]==4)
                    a[++k]=j;
          }
          sort(a,a+k+1,greater<ll>());
          
          if(k>=1)
               cout<<a[0]*a[1]<<endl;
          else
               cout<<"-1\n";
     }
     
     return 0;
}