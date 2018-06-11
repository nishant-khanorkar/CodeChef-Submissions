#include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

#define ll long long
 
int main()
{
     ll n,l,r,i,count=0,l1,r1,y,x,z;
     vector<ll> a;
    
     cin>>n>>l>>r;
     l1=l;r1=r;
     for(i=0;i<n;i++)
     {
          cin>>x;
          a.push_back(x);
     }
          
     sort(a.begin(),a.end());
     
     for(i=n-2;i>=0;i--)
     {    
          y=a[i+1]-a[i]+1;  
          z=a[i+1]+a[i]-1;   
          
          
          if(y>=l1 && z>=r1 && y<=r1)
          {
               count+=r1-y+1;
               r1=y-1;
               if(y==l1) 
                  break;
               continue;
          }//1
          
          
          if(y<=l1 && z>=r1)
          {
               count+=r1-l1+1;
               break;
          }//2
          
          if(y<=l1 && z>=l1 && z<=r1)
          {
               count += z-l1+1;
               break;
          }//3
          
          if(y>=l1 && z<=r1)
          {
               count+=z-y+1;
               if(y==l1)
                 break;
               r1=y-1;
          }
      
     }
     
     cout<<count;
     return 0;
}