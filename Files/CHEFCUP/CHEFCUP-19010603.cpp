#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     int nn,i;
     cin>>nn;
     
     ll a,b,c,p,q,u,v;
     double r,x,y;
     
     while(nn--)
     {
          cin>>a>>b;
          
          r=a*a-a*b+b*b;
          x=(a+b-sqrt(r))/3.0;
          y=(a+b+sqrt(r))/3.0;
          
          p=ceil(x);q=floor(x);
          u=ceil(y);v=floor(y);
          
          vector<ll> aa,ans;
          if(p && a>=p && b>=p)    aa.push_back(p);
          if(q && a>=q && b>=q)    aa.push_back(q);
          if(a>=u && b>=u)         aa.push_back(u);
          if(a>=v && b>=v)         aa.push_back(v);
          
          sort(aa.begin(),aa.end());
          for(ll f:aa)
               ans.push_back((a-f)*(b-f)*f);
          
          ll n=-1,k=0;
          for(i=0;i<aa.size();i++)
               if(ans[i]>n)
               {
                    n=ans[i];
                    k=i;
               }
          
          cout<<aa[k]<<" "<<ans[k]<<endl;
     }
     return 0;
}    
