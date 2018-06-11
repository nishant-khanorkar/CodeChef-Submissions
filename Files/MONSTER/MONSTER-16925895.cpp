#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,hh,qq,i,j,p,q,aa,bb,sm,xp[200005],x,y,z,h,r,s,mx;
     
     cin>>hh;
     y=1;
     for(i=0;i<hh;i++)
     {
          cin>>xp[i];
          if(xp[i]!=1)
               y=0;
     }
     
     mx=ceil((double)log(hh)/log(2));
     //cout<<mx<<endl;
     
     ll po[18];
     po[0]=1;
     for(i=1;i<=17;i++)
          po[i]=po[i-1]*2;
               
     r=po[mx]-1;
     p=hh;
     
     cin>>gg;
     if(y==1)
     {
          int vv[200005]={0};
          
          while(gg--)
          {
               cin>>aa>>bb;
               
               aa=(aa&r);
               
               vector<ll> bt;
               
               if(vv[aa]==0)
               {
                    vv[aa]=1;
                    
                    q=aa;
                    for(i=0;q>0;i++)
                    {
                         if(q%2==1)
                              bt.push_back(i);
                         q/=2;
                    }
                    
                    s=bt.size();
                    z=po[s];
                    q=aa;
                    for(i=0;i<z;i++)
                    {
                         x=i;
                         for(j=0;j<s;j++)
                         {
                              q=q&(~(1<<bt[j]));
                              q=q|((x%2)<<bt[j]);
                              x/=2;
                         }
                         if(xp[q]>0)
                         {
                              xp[q]-=bb;
                              p--;
                         }
                    }
               }
               cout<<p<<endl;
          }
     }
     else
          while(gg--)
          {
               cin>>aa>>bb;
               
               aa=(aa&r);
               
               vector<ll> bt;
               
               q=aa;
               for(i=0;q>0;i++)
               {
                    if(q%2==1)
                         bt.push_back(i);
                    q/=2;
               }
                    
               s=bt.size();
               z=po[s];
               q=aa;
               for(i=0;i<z;i++)
               {
                    x=i;
                    for(j=0;j<s;j++)
                    {
                         q=q&(~(1<<bt[j]));
                         q=q|((x%2)<<bt[j]);
                         x/=2;
                    }
                    if(xp[q]>0)
                    {
                         xp[q]-=bb;
                         if(xp[q]<=0)
                              p--;
                    }
               }
               cout<<p<<endl;
          }
     return 0;
}