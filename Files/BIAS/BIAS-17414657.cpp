#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
     ll gg,hh,kk,i,j,k,p;
     cin>>gg;
     while(gg--)
     {
          cin>>hh>>kk;
          ll xy[kk][2];
          for(i=0;i<kk;i++)
               cin>>xy[i][0]>>xy[i][1];
          ll py[hh][kk];
          for(i=0;i<hh;i++)
               for(j=0;j<kk;j++)
                    cin>>py[i][j];
          for(i=0;i<kk;i++)
               cout<<xy[i][1-i%2]<<" ";
          cout<<endl;
     }
     return 0;
}