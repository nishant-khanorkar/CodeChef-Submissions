#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll w1[21],w2[21],ans[23][23]={0},ii,jj;

ll inCnt(ll p,ll q)
{
     for(ii=1;ii<=p;ii++)
          for(jj=1;jj<=q;jj++)
          {
               if(w1[ii-1]==w2[jj-1])
                    ans[ii][jj]=ans[ii-1][jj]+ans[ii-1][jj-1];
               else
                    ans[ii][jj]=ans[ii-1][jj];
          }
     return ans[p][q];
}

vector<ll> bigH[1001];

int main()
{
     
     ll i,j,k,gg,hh,kk,aa,bb,x,y,z;
     
     for(i=0;i<20;i+=2)
     {
          w2[i]=0;
          w2[i+1]=1;
          ans[i][0]=1;
          ans[i+1][0]=1;
     }
     ans[20][0]=1;
     ans[21][0]=1;
     y=pow(2,20)-1;
     for(i=2;i<=y;i+=2)
     {
          aa=i;
          j=0;
          while(aa>0)
          {
               w1[j++]=aa%2;
               aa/=2;
          }
          
          bb=0;
          for(k=2;k<=20;k+=2)
          {
               if(k>j)
                    break;
               /*else if(k==j)
               {
                    ll flag=1;
                    for(k=0;k<j;k++)
                         if(w1[k]!=w2[k])
                         {
                              flag=0;
                              break;
                         }
                    bb+=flag;
                    break;
               }*/
               bb+=inCnt(j,k);
               if(bb>1000)
                    break;
               //cout<<"    * "<<k<<" "<<bb<<endl;
          }
          if(bb<=1000)
               bigH[bb].push_back(i);
          //cout<<i<<" "<<bb<<endl;
     }
     
     char ds[25];
     cin>>x;
     vector<ll>::iterator pt;
     while(x--)
     {
          cin>>ds;
          cin>>y;
          
          k=strlen(ds);
          aa=1;
          z=0;
          for(i=k-1;i>=0;i--)
          {
               z=z+(ds[i]-'0')*aa;
               aa*=2;
          }
          //cout<<z<<endl;
          ll flag=0,u,v,w,rs=30,cnt;
          for(pt=bigH[y].begin();pt!=bigH[y].end();++pt)
          {
               u=*pt;
               v=1+log(u)/log(2);
               if(k==v)
               {
                    flag=1;
                    w=z^u;
                    cnt=0;
                    while(w>0)
                    {
                         cnt+=w%2;
                         w/=2;
                    }
                    rs=min(rs,cnt);
                    //cout<<u<<" "<<cnt<<endl;
               }
          }
          if(flag==1)
               cout<<"YES\n"<<rs<<endl;
          else
               cout<<"NO\n";
     }
     
     return 0;
}