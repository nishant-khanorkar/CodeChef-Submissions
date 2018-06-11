#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int hcf_(int a,int b) 
{
     if(a==0)
          return b;
     return hcf_(b%a,a);
}

int ip[11][11],ans[11][11];
          
int flag;
void ddffss(int ko[],int t[],int r,int i,int vv[],int ro[])
{
     int j,k;
     if(i<r)
     {
          for(j=0;j<r;j++)
          {
               if(vv[j]==0)
               {
                    vv[j]=1;
                    ko[t[i]]=ro[j];
                    ddffss(ko,t,r,i+1,vv,ro);
                    if(flag==1)
                         return;
                    vv[j]=0;
               }
          }
     }
     else
     {
          flag=1;
          for(j=0;j<r;j++)
               for(k=0;k<r;k++)
                    if(ans[ko[t[j]]][ko[t[k]]]!=ip[t[j]][t[k]])
                    {
                         flag=0;
                         break;
                    }
     }
}

int main()
{
     int gg,hh,jj,k,i,j;
     cin>>gg;
               
     vector<int> fr[11];
     for(i=1;i<=10;i++)
          for(j=i;j<=10;j+=i)
               fr[j].push_back(i);
               
     for(i=1;i<=10;i++)
          for(j=1;j<=10;j++)
               ans[i][j]=i==j?0:fr[hcf_(i,j)].size();
               
     while(gg--)
     {
          cin>>hh;
          int ct[hh+1]={0},t[hh+1]={0},ko[hh+1];
          int go[]={1,7},ro[]={2,3,4,5,6,8,9,10},s=0,r=0;
          for(i=1;i<=hh;i++)
          {
               for(j=1;j<=hh;j++)
               {
                    cin>>ip[i][j];
                    ct[i]+=ip[i][j];
               }
               if(ct[i]==hh-1 && s<3 && go[s]<=hh)
                    ko[i]=go[s++];
               else
                    t[r++]=i;
          }
          
          int vv[r]={0};
          flag=0;
          ddffss(ko,t,r,0,vv,ro);
          for(i=1;i<=hh;i++)
               cout<<ko[i]<<endl;
     }
     return 0;
}