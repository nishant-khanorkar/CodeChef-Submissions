#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tt,d,c,b;
     float xx;
     cin>>tt;
     while(tt--)
     {
          int rev[6]={0};
          cin>>d;
          while(d--)
          {
               cin>>xx;
               c=(int)xx/80;
               if(rev[c]!=2)
                    rev[c]++;
          }
          for(d=0,c=0;c<6;c++)
               d+=rev[c];
          cout<<d<<endl;
     }
     return 0;
}