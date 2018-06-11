#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     ll nnn,lll,ttt,k,i,j,xored,howMuch,x,y;
     char movs[5007],matrM[1005][1005],chh;
     
     cin>>ttt;
     while(ttt--)
     {
          cin>>lll>>nnn>>movs;
          for(k=0;k<nnn;k++)
               cin>>matrM[k];
          
          xored=0;
          for(i=0;i<nnn;i++)
          {
               for(j=0;j<nnn;j++)
               {
                    howMuch=0;
                    if(matrM[i][j]=='.')
                    {
                         x=i,y=j;
                         for(k=0;k<lll;k++)
                         {
                              chh=movs[k];
                              if(chh=='R')
                                   y++;
                              if(chh=='D')
                                   x++;
                              if(chh=='U')
                                   x--;
                              if(chh=='L')
                                   y--;
                         
                              if(matrM[x][y]!='#' && x>=0 && x<nnn && y>=0 && y<nnn)
                                   howMuch++;
                              else
                                   break;
                         }
                         xored^=howMuch;
                    }
               }
          }
          cout<<xored<<endl;
     }
     return 0;
}