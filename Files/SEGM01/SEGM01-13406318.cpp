#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll i,j,tt,nnn,l1,big,cc;
     char ss[100005];
     cin>>tt;
     while(tt--)
     {
          cin>>ss;
          j=strlen(ss);
          nnn=big=0;
          cc=0;
          for(i=0;i<j;i++)
          {
               l1=0;
               while(ss[i]=='1' && i<j)
               {
                    i++;
                    l1++;
               }
               if(l1>0)
                    i--;
               cc+=l1;
               if(l1>big)
                    big=l1;
          }
          if(cc==big && cc>0)
               cout<<"YES"<<endl;
          else
               cout<<"NO"<<endl;
     }
     return 0;
}