#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
     int ttt,i,j,kkk,nnn,parr[100005],pp,cy,cntIN,cntIS,felag;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn>>kkk;
          cntIS=0,cntIN=0;
          int visi[kkk]={0};
          
          for(i=0;i<nnn;i++)
          {
               cin>>pp;
               felag=0;
               for(j=0;j<pp;j++)
               {
                    cin>>cy;
                    if(visi[cy-1]==0)
                    {
                         visi[cy-1]=1;
                         cntIN++;
                         felag=1;
                    }
               }
               cntIS+= felag; 
          }
          if(cntIN==kkk)
          {
               if(cntIS==nnn)
                    cout<<"all\n";
               else
                    cout<<"some\n";
          }
          else
               cout<<"sad\n";
     }
	return 0;
}