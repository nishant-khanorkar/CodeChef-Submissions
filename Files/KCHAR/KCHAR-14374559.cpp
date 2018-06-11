#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,ff,ss,z;
     double y;
     cin>>gg;
     while(gg--)
     {
          cin>>ff;
          z=0;
          do
          {
               y=ceil(log10(ff)/log10(2));
               ss=pow(2,y);
               ff=ss-ff;
               z^=1;
          }while(ff!=0);
          if(z)
               cout<<'a'<<endl;
          else
               cout<<'c'<<endl;
     }
     return 0;
}