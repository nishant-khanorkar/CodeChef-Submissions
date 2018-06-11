#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ll aq,bq,i,j,big,small,n1,half,sumB=0,treeVAL[1000005]={0};
     
     cin>>small>>big;
          
     n1=big+1;
     list<ll> *adj;
     list<ll>::iterator p;
     adj = new list<ll>[n1];
     ll top[n1]={0};
     half=big/2;
     
     for(i=2;i<=half;i++)
          for(j=2*i;j<=big;j+=i)
               adj[j].push_back(i),top[j]++;
     
     if(small==1 && big==1)
     {
          cout<<0;
          exit(0);
     }
     n1=small;
     if(small==1)
          n1++;
     big++;
     
     treeVAL[0]=0;
     treeVAL[1]=0;
     ll l=big/16;
     
     for(i=2;i<=l;i++)
     {
          if(top[i]==0)
          {
               treeVAL[i]=2;
               continue;
          }
          aq=-1,bq=0;
          for(p=adj[i].begin();p!=adj[i].end();p++)
               if(top[*p]>aq)
                    aq=top[*p],bq=*p;
               
          treeVAL[i]=top[i]+2+treeVAL[bq];
          
     }
     
     while(n1!=big)
     {
          if(treeVAL[n1]!=0)
          {
               sumB+=treeVAL[n1];
               n1++;
               continue;
          }
          small=n1;
          sumB+=top[small]+2;
     
          while(top[small]!=0)
          {    
               aq=0,bq=0;
               for(p=adj[small].begin();p!=adj[small].end();p++)
                    if(top[*p]>aq)
                         aq=top[*p],bq=*p;
               if(treeVAL[bq]!=0)
               {
                    sumB+=treeVAL[bq];
                    break;
               }
               sumB+=aq+2;
               small=bq;
          }
          n1++;
     }
     cout<<sumB;
}