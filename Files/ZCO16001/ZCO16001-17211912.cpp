#include<bits/stdc++.h>
using namespace std;

int main()
{
     int nn,xx,yy,i,j,k,x,y,z;
     cin>>nn>>xx;

     vector<int> v[4];
     for(i=0;i<nn;i++)
     {
          cin>>x;
          v[0].push_back(x);
          v[3].push_back(x);
     }
     for(i=0;i<nn;i++)
     {
          cin>>x;
          v[1].push_back(x);
          v[2].push_back(x);
     }

     sort(v[0].begin(),v[0].end());
     sort(v[1].begin(),v[1].end());
     sort(v[2].begin(),v[2].end());
     sort(v[3].begin(),v[3].end());

     x=xx;
     for(i=nn-1,j=0;i>0;i--,j++)
     {
          if(xx==0)
               break;
          if(v[0][i]>v[1][j])
               swap(v[0][i],v[1][j]);
          else
               break;
          xx--;
     }
     xx=x;
     for(i=nn-1,j=0;i>0;i--,j++)
     {
          if(xx==0)
               break;
          if(v[2][i]>v[3][j])
               swap(v[2][i],v[3][j]);
          else
               break;
          xx--;
     }
     sort(v[0].begin(),v[0].end());
     sort(v[1].begin(),v[1].end());
     sort(v[2].begin(),v[2].end());
     sort(v[3].begin(),v[3].end());
     cout<<min(v[0][nn-1]+v[1][nn-1],v[2][nn-1]+v[3][nn-1]);
     return 0;
}
