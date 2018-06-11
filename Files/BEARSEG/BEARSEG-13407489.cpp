#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll i,j,tt,nn,l1,big,cc,k,aa[100005],no,mod;
     cin>>tt;
     while(tt--)
     {
          cin>>nn>>cc;
          for(i=0;i<nn;i++)
          {
               cin>>aa[i];
          }
          big=0;
          no=0;
          for(i=0;i<nn;i++)
          {
               l1=0;
               for(j=i;j<nn;j++)
               {
                    l1+=aa[j];
                    k=l1%cc;
                    if(k==big)
                    {
                         no++;
                         //cout<<k<<"=="<<no<<endl;
                    }
                    if(k>big)
                    {
                         big=k;
                         no=1;
                    }
               }
          }
          cout<<big<<" "<<no<<endl;
     }
     return 0;
}