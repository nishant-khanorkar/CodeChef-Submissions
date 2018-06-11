#include<iostream>

using namespace std;

#define ll long long
 
int main()
{
     ll n,m,l,r,k,a[100005],b[100005][3],i,p,q,s,flag,sameMax=0,link,x,y;
     cin>>n>>m;
     
     cin>>a[1];
     p=a[1];
     flag=0;
     s=0;
     
     for(i=2;i<=n;i++)
     {
          b[i][0]=s;
          cin>>q;
          a[i]=q;
          if(q==p && flag==0)
          {
               flag=1;
               s=i-1;
               b[i][0]=s;
               b[s][2]=q;
          }
          else if(q!=p and flag==1)
          {
               flag=0;
               b[s][1]=i-1;
               if(b[s][1]-s+1 >sameMax)
                    sameMax=b[s][1]-s+1;
               p=q;
          }
          else if(q!=p)
               p=q;
     }
     
     if(flag==1)
     {
          b[s][1]=n;
          if(sameMax< n-s+1)
               sameMax=n-s+1;
     }
     
     while(m--)
     {
          cin>>l>>r>>k;
          
          if(k==1)
          {
               cout<<a[l]<<endl;
               continue;
          }
          if(k>sameMax)
          {
               cout<<"-1\n";
               continue;
          }
          
          link=b[r][0];
          y=b[link][1]<r ? b[link][1] : r;
          x=link>l ? link : l;
          
          while(link!=0)
          {
               if(y-x+1>=k)
                    goto WWW;
               
               link=b[link][0];
               y=b[link][1];
               x=link<l ? l : link;
               
               if( r-k+1 > y )
                    break;
          }
          cout<<"-1\n";
          continue;
          WWW: cout<<b[link][2]<<endl;
     }
     return 0;
}