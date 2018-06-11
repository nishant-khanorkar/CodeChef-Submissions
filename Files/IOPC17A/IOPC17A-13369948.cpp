#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
int l1,r1,de,coUnt,x,range[100005];
 
void rec(int l,int r)
{
     if(r-l+1<=de)
          return;
     x=r-l+1;
               
     if(range[r]>=x)
     {
          if(r-l+1>de)
          {
               l1=l;r1=r;de=r1-l1+1;
          }
          return;
     }
     if(x%2==1)
          return;
     
     if(l+1==r)
     {
          if(de==0)
          {
               l1=l;r1=l;de=1;/*this condition was the culprit*/
          }
          return;
     }
     int mid=(r-l-1)/2;
     
     rec(l,l+mid);
     rec(l+mid+1,r);
}
 
int main()
{
     int tt,n,l,r,i,x,moves,max,mid;
     double pp=log10(2);
     char ss[100005],c;
     cin>>tt;
     while(tt--)
     {
          cin>>ss;
          n=strlen(ss);
          
          range[0]=1;
          for(i=1;i<n;i++)
          {
               if(ss[i-1]==ss[i])
                    range[i]=range[i-1]+1;
               else
                    range[i]=1;
          }
          l=0;
          r=n-1;
          moves=0;
          de=0;
          
          rec(l,r);
          
          if(de==0)
               cout<<-1<<endl;
          else
          {
               moves=n/(r1-l1+1);
               x=1;
               for(i=0;x!=moves;i++)
                    x=x*2;
               cout<<i<<endl;
          }
     }
     return 0;
}