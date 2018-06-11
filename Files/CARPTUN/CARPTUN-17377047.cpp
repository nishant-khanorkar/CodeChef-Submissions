#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int i,j,gg,hh;
     double p,y[100005],jd,js,t,e;
     double ty;
     cin>>gg;
     while(gg--)
     {
          cin>>hh;
          ty=0;
          for(i=1;i<=hh;i++)
          {
               cin>>e;
               ty=max(ty,e);
          }    
          cin>>p>>jd>>js;
          
          ty=ty*(p-1.0);
          printf("%0.9f\n",ty);
     }
     return 0;
}