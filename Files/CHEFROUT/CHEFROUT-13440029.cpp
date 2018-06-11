#include<bits/stdc++.h>
using namespace std;

int main()
{
     char nnn[100005];
     int ttt,jjj,iii,flag;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn;
          flag=0;
          iii=strlen(nnn);
          for(jjj=1;jjj<iii;jjj++)
               if(nnn[jjj-1]>nnn[jjj])
               {
                    flag=1;
                    break;
               }
          if(flag==1)
               cout<<"no\n";
          else
               cout<<"yes\n";
     }
     return 0;
}