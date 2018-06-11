#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int gg,hh,jj,i,xp[4];
     cin>>gg;
     while(gg--)
     {
          for(i=0;i<4;i++)
               cin>>xp[i];
          sort(xp,xp+4);
          if(xp[0]==xp[1] && xp[2]==xp[3])
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
     return 0;
}