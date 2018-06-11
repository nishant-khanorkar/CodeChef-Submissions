#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll tt,d,c,b,nn[100005],count,k;
     cin>>tt;
     while(tt--)
     {
          cin>>d;
          for(c=0;c<d;c++)
               cin>>nn[c];
          count=0;
          for(c=1;c<=d;c++)
          {
               b=nn[c-1];
               k=1;
               while(c<d && b==nn[c])
                    k++,c++;
               count+=(k*(k+1))/2;
          }
          cout<<count<<endl;
     }
     return 0;
}