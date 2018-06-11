#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int gg,hh,kk,i,j,k,p,q,r,s,a,b;
     char f;
     cin>>gg;
     while(gg--)
     {
          cin>>p>>q>>r>>s;
          for(a=0,b=0,i=0;i<s;i++)
          {
               scanf(" %c ",&f);
               f=='E'?b++:a++;
          }
          for(i=1;i<=q;i++)
          {
               if(i%2)
               {
                    if(a>0)
                    {    
                         p-=min(r,a);
                         a-=min(r,a);
                    }
               }
               else
               {
                    if(b>0)
                    {    
                         p-=min(r,b);
                         b-=min(r,b);
                    }    
               }
          }
          if(p>0)
               cout<<"no";
          else
               cout<<"yes";
          cout<<endl;
     }
     return 0;
}