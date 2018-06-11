#include<bits/stdc++.h>
using namespace std;
#define ll long long


list<int> ss[5001];
ll y;
int vv[5001];

void DDFFSS(int p,int q,int d)
{
     if(d==5 || y==1)
          return;
     vv[p]=1;
     list<int>::iterator ii;
     for(ii=ss[p].begin();ii!=ss[p].end();++ii)
          if (vv[*ii]==0)
               DDFFSS(*ii,q,d+1);
          else
          {
               if(*ii==q && d==4)
               {
                    y=1;
                    return;
               }
          }
}
int main()
{
     ll gg,hh,xx,yy,zz,x,z,a,b,c,i,j;
     cin>>gg>>hh;
     a=hh;
     while(a--)
     {
          cin>>x>>y;
          ss[x].push_back(y);
          ss[y].push_back(x);
     }
     
     y=0;
     for(i=1;i<=gg;i++)
     {
          for(j=1;j<=gg;j++)
               vv[j]=0;
          DDFFSS(i,i,1);
          if(y==1)
               break;
     }
     if(y==1)
          cout<<"Yes";
     else
          cout<<"No";
     return 0;
}