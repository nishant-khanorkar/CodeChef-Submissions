#include<bits/stdc++.h>
using namespace std;

int main()
{
     int ttt,nnn,jjj,iii,max;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn;
          max=0;
          for(iii=0;iii<nnn;iii++)
          {
               cin>>jjj;
               if(jjj>max)
                    max=jjj;
          }
          cout<<nnn-max<<endl;
     }
     return 0;
}