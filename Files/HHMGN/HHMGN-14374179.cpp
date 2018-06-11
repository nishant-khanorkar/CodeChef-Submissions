#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,kk,ff,i,aa[20005],ss;
     cin>>gg;
     while(gg--)
     {
          cin>>kk>>ff;
          for(i=0;i<kk;i++)
               cin>>aa[i];
          sort(aa,aa+kk);
          ss=0;
          for(i=0;i<kk;i++)
          {
               if(ss+(kk-i)*aa[i]==ff)
               {
                    cout<<aa[i]<<endl;
                    goto BRO;
               }
               ss+=aa[i];
          }
          cout<<-1<<endl;
          BRO:;
     }
     return 0;
}