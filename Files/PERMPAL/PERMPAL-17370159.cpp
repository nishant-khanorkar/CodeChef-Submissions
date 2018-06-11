#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int gg,hh,kk,i,j,k,p,q,r,s,a,b,y[100005];
     char d[100005],f;
     cin>>gg;
     while(gg--)
     {
          cin>>d;
          int x[27]={0};
          vector<int> gk[26];
          vector<int>::iterator ho;
          b=strlen(d);
          for(i=0;i<b;i++)
          {
               x[d[i]-'a']++;
               gk[d[i]-'a'].push_back(i+1);
          }
          for(a=0,i=0;i<26;i++)
               if(x[i]%2)
                    a++,p=i;
          if((b%2==0 && a>0)||(b%2 && a>1))
               cout<<"-1"<<endl;
          else
          {
               for(i=0,j=0;i<26;i++)
               {
                   if(x[i] && (x[i]%2==0))
                   {
                         for(ho=gk[i].begin();ho!=gk[i].end();++ho)
                         {
                              y[j]=*ho;
                              ++ho;
                              y[b-1-j]=*ho;
                              j++;
                         }
                   }
               }
               if(b%2)
               {
                    for(ho=gk[p].begin();ho!=gk[p].end();++ho)
                    {
                         y[j]=*ho;
                         j++;
                    }
               }
               for(i=0;i<b;i++)
                    cout<<y[i]<<" ";
               cout<<endl;
          }
     }
     return 0;
}