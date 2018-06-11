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
          ll px[hh+1][hh+1];
          px[0][0]=1;
          for(i=1;i<=hh;i++)
          {
               px[i-1][i]=0;
               px[i][0]=1;
               for(j=1;j<=i;j++)
                    px[i][j]=( (i*px[i-1][j-1])%kk + px[i-1][j]%kk )%kk;
          }
          p=hh+1;
          for(i=0;i<=hh;i++)
               if(px[hh][i]==0)
                    p--;
          cout<<(p%mod)<<endl;
     }
     return 0;
}