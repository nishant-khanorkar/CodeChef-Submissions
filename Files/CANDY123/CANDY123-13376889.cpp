#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
     int tt,aa,bb,i,x,y;
     cin>>tt;
     while(tt--)
     {
          cin>>aa>>bb;
          i=1;
          x=0,y=0;
          while(1)
          {
               x=i*i;
               if(x>aa)
               {
                    cout<<"Bob"<<endl;
                    break;
               }
               y=i*(i+1);
               if(y>bb)
               {
                    cout<<"Limak"<<endl;
                    break;
               }
               i++;
          }
     }
     return 0;
}