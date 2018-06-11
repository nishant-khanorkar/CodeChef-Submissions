#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long

int main()
{
    ll b,c;
    int gg,hh,kk,k,dd[1000001],j,a,d,i,m,n;

    cin>>gg;
    while(gg--)
    {
          cin>>hh;
          
          vector<ll> pp[hh],qq[hh];

          hh--;
          for(i=0;i<hh;i++)
          {
               cin>>a;
               dd[i]=a;
               for(j=0;j<a;j++)
               {
                    cin>>b;
                    pp[i].push_back(b);
                    qq[i].push_back(0);
               }
          }
       
          cin>>d>>a;
          dd[hh]=d;
          m=n=a;
          for(i=1;i<d;i++)
          {
               cin>>a;
               if(a>m)
                    m=a;
               else if(a<n)
                    n=a;
          }
          
          d=hh-1;
          if(d>=0)
          {
               a=dd[d];
               for(i=0;i<a;i++)
               {
                    b=pp[d][i];
                    qq[d][i]=max(abs(b-m),abs(b-n))*hh;
               }
          }
          else
          {
               cout<<"0"<<endl;
               continue;
          }

          for(i=hh-1;i>0;i--)
          {
               d=i-1;
               k=dd[d];
               kk=dd[i];
               for(j=0;j<kk;j++)
               {
                    b=qq[i][(j-1+kk)%kk];
                    c=pp[i][j];
                    for(a=0;a<k;a++)
                    {
                         if((abs(c-pp[d][a])*i +b)>(qq[d][a]))
                         {
                              qq[d][a]=abs(c-pp[d][a])*i +b;
                         }
                    }
               }
          }
          c=0;
          b=dd[0];
          for(i=0;i<b;i++)
          {
               if(qq[0][i]>c)
                    c=qq[0][i];
          }
          cout<<c<<endl;
     }
     return 0;
}