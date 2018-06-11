#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,hh,i,j,h;
     ll k,m,ans,p;
        
     cin>>gg>>hh;
     
     int add[gg+1][31]={0};
        
     for(i=1;i<=gg;i++)
     {
          cin>>h;
          j=0;
          while(h>0)
          {
               add[i][j++]=h%2;
               h/=2;
          }
     }
        
     for(i=1;i<=gg;i++)
          for(j=0;j<31;j++)
               add[i][j]+=add[i-1][j];
        
     while(hh--)
     {
          cin>>i>>j;
          for(h=0,ans=0,m=1;h<31;h++)
          {
               p=add[j][h]-add[i-1][h];
               if(p>=j-i+1-p)//Chhota X hona bole
                    ans+=0;
               else
                    ans+=m;
               m*=2;
          }
          cout<<ans<<endl;
     }
     return 0;
}