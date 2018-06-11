#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tt,xx,yy,aa[4],a,b,c,d,i;
     char s[50][4];
     cin>>tt;
     while(tt--)
     {
          cin>>s[0]>>aa[0];
          cin>>s[1]>>aa[1];
          cin>>s[2]>>aa[2];
          cin>>s[3]>>aa[3];
          for(i=0;i<4;i++)
               if(s[i][0]=='B')
               {
                    a=aa[i];
                    break;
               }
          for(i=0;i<4;i++)
               if(s[i][0]=='E')
               {
                    b=aa[i];
                    break;
               }
          for(i=0;i<4;i++)
               if(s[i][0]=='R')
               {
                    c=aa[i];
                    break;
               }
          for(i=0;i<4;i++)
               if(s[i][0]=='M')
               {
                    d=aa[i];
                    break;
               }

          if(c<d && a>b)
               cout<<"Barcelona"<<endl;
          else
               cout<<"RealMadrid"<<endl;
     }
     return 0;
}