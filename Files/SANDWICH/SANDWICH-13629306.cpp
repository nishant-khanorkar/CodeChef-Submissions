#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cnt,x,y,a[10000006],jj,sum,nn,mm,kk;

void cal(ll zz,ll uu)
{
     if(zz<=x)
     {
          a[zz]=y;
          for(ll pp=y;pp<=kk;pp++)
          {
               uu=uu+a[zz];
               if((x+1-zz)*kk+uu<nn)
                    return;
               cal(zz+1,uu);
               a[zz]++;
          }
     }
     else
     {
          sum=0;
          for(jj=0;jj<=x;jj++)
               sum+=a[jj];
          if(sum==nn)
               cnt=(cnt+1)%mm;
     }
}
 
int main()
{
     ll tt,ii;
     cin>>tt;
     while(tt--)
     {
          cin>>nn>>kk>>mm;
          if(kk>=nn)
          {
               cout<<"1 1\n";
               continue;
          }
          if(nn%kk==0)
          {
               cout<<nn/kk<<" "<<1<<endl;
               continue;
          }
          x=nn/kk;
          y=nn%kk;
          cnt=0;
          cal(0,0);
          cout<<x+1<<" "<<cnt<<endl;
     }
     return 0;
}