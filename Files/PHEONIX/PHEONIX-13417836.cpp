#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int tt,nn,i,j,k,cc;
     cin>>tt;
     while(tt--)
     {
          cin>>nn>>k;
          cc=1;
          for(i=1;i<nn;i++)
          {
               cin>>j;
               if(j!=k)
                    cc=0;
          }
          for(i=0;i<nn;i++)
          {
               cin>>j;
               if(j<15)
                    cc=0;
          }
          if(cc==1)
               cout<<"Party\n";
          else
               cout<<"No Party\n";
     }
     return 0;
}