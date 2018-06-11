#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
     ll tt,aa,bb,i,x,y,st[100005],top;
     char ss[100005];
     cin>>tt;
     while(tt--)
     {
          cin>>aa>>bb>>ss;
          int sum[100005]={0};
          x=0;
          top=-1;
          for(i=aa-1;i>=0;i--)
          {
               if(ss[i]=='b')
               {
                    x++;
                    continue;
               }
               if(ss[i]=='a')
               {
                    sum[i]=x;
                    st[++top]=i;
               }
          }
          y=0;
          for(i=0;i<=top;i++)
          {
               y+=bb*sum[st[i]]+(x*bb*(bb-1))/2;
          }
          cout<<y<<endl;
                    
     }
     return 0;
}