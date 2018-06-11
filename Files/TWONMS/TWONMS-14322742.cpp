#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,kk,yy,hh,a,b;
     cin>>gg;
     while(gg--)
     {
          cin>>kk>>yy>>hh;
          a=kk*pow(2,ceil((double)hh/2)-(hh/2));
          b=yy*pow(2,floor((double)hh/2)-(hh/2));
          cout<<max(a,b)/min(a,b)<<endl;
     }
     return 0;
}