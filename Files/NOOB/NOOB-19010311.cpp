#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     int nn;
     cin>>nn;
     int i,j,k;
     
     vector<int> x;
     for(i=0;i<nn;i++)
     {
          cin>>k;
          x.push_back(k);
     }
     sort(x.begin(),x.end());
     int g=0,h;
     for(i=0;i<nn;)
     {
          if(x[i]==0)
          {
               i++;
               continue;
          }
          h=x[i];
          j=i;
          while(j<nn && h==x[j])
               j++;
          i=j;
          g++;     
     }
     cout<<g;
     return 0;
}    
