#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,hh,jj,i,xp[705][705],pp,qq,r,s,p,j;
     cin>>gg;
     while(gg--)
     {
          cin>>hh;
          for(i=0;i<hh;i++)
               for(j=0;j<hh;j++)
                    cin>>xp[i][j];
          
          pp=0;
          p=pow(10,10)+7;
          for(i=hh-1;i>=0;i--)
          {
               s=-1;
               for(j=0;j<hh;j++)
                    if(xp[i][j]<p && xp[i][j]>s)
                         s=xp[i][j];
               if(s==-1)
               {
                    s=-5;
                    break;
               }
               else
               {
                    pp+=s;
                    p=s;
               }
          }
          if(s==-5)
               cout<<-1<<endl;
          else
               cout<<pp<<endl;
     }
     return 0;
}