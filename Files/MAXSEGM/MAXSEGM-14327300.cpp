#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,pr,a,b,lg,max,xx[1000001],vv[1000001],sm[1000001],i,j;
     cin>>gg;
     while(gg--)
     {
          cin>>a;
          pr=-1;
          max=0;
          for(i=0;i<a;i++)
          {
               cin>>xx[i];
               vv[i]=-1;
          }
          vv[i]=-1;
          
          cin>>sm[0];
          for(i=1;i<a;i++)
          {
               cin>>b;
               sm[i]=sm[i-1]+b;
          }
           
          for(i=0;i<a;i++)
          {
               if(vv[xx[i]]==-1)
                    vv[xx[i]]=i;
               else
               {
                    lg=vv[xx[i]];
                    b=sm[i-1];
                    if(pr!=-1)
                         b-=sm[pr];
                    if(b>max)
                         max=b;
                    for(j=pr+1;j<=lg;j++)
                         vv[xx[j]]=-1;
                    vv[xx[i]]=i;
                    pr=lg;
               }
          }     
          b=sm[a-1];
          if(pr!=-1)
               b-=sm[pr];
          if(b>max)
               max=b;
          cout<<max<<endl;
     }
     return 0;
}