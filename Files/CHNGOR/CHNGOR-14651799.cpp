#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
     ll ff,gg,kk[100005],sum,ans,i,j;
     cin>>ff;
     while(ff--)
     {
          cin>>gg;
          ans=0;
          for(i=0;i<gg;i++)
          {
               cin>>kk[i];
               ans|=kk[i];
          }
          cout<<ans<<endl;
     }
     return 0;
}