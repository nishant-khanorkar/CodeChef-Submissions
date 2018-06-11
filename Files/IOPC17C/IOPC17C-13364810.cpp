#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
     ll tt,n,aaa[100005],y,j,i;
     cin>>tt;
     while(tt--)
     {
          cin>>n;
          for(i=0;i<n;i++)
               cin>>aaa[i];
          sort(aaa,aaa+n);
          ll max=0;
          for(i=0;i<n;i++)
          {
               y=aaa[i]%aaa[n-1];
               if(y>max)
                    max=y;
          }
          cout<<max<<endl;
     }
     return 0;
}