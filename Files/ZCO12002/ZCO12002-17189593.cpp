#include<bits/stdc++.h>
using namespace std;

int main()
{
     int nn,xx,yy,i,k,x;
     cin>>nn>>xx>>yy;
     int cp[nn][2];

     set<int> edI;
     set<int,greater<int>> stD;

     for(i=0;i<nn;i++)
          cin>>cp[i][0]>>cp[i][1];

     for(i=0;i<xx;i++)
     {
          cin>>x;
          stD.insert(x);
     }
     for(i=0;i<yy;i++)
     {
          cin>>x;
          edI.insert(x);
     }

     set<int>::iterator a1;
     set<int,greater<int>>::iterator a2;
     k=pow(10,6);
     for(i=0;i<nn;i++)
     {
          a1=stD.lower_bound(cp[i][0]);
          a2=edI.lower_bound(cp[i][1]);
          if(a1!=stD.end()&&a2!=edI.end())
               k=min(k,*a2-*a1+1);
     }
     cout<<k;
     return 0;
}
