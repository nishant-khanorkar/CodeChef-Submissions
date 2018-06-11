#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     int ttt,i,j,crr,hh,recur[10],coUnt;
     ll lll,rrr;
     cin>>ttt;
     while(ttt--)
     {
          cin>>lll>>rrr;
          for(i=0;i<10;i++)
               cin>>recur[i];
          coUnt=rrr-lll+1;     
          for(i=lll;i<=rrr;i++)
          {
               int occur[10]={0};
               crr=i;
               do
               {
                    hh=crr%10;
                    occur[hh]++;
               }while((crr/=10)>0);
               for(j=0;j<10;j++)
                    if(occur[j]==recur[j])
                    {
                         coUnt--;
                         break;
                    }
          }
          cout<<coUnt<<endl;
     }
     return 0;
}