#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int ttt;
     ll aa,bb,nnn;
     long double xx;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn;
          xx=log10(nnn)/log10(2);
          aa=pow(2,ceil(xx));
          bb=pow(2,floor(xx));
          if(abs(aa-nnn)<=abs(bb-nnn))
               cout<<abs(aa-nnn)<<endl;
          else
               cout<<abs(bb-nnn)<<endl;
     }
     return 0;
}