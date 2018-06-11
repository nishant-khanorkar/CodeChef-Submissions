#include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int ttt,i,nnn,mmm,range[100005],value[100005],lll,rrr,kkk,coUnt,low;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn>>mmm>>value[1];
          
          vector<int> k[1000005];
          set<int> int_end;
          
          range[1]=1;
          k[1].push_back(1);
          
          for(i=2;i<=nnn;i++)
          {
               cin>>value[i];
               if(value[i]==value[i-1])
                    range[i]=range[i-1]+1;
               else
                    range[i]=1;
               k[range[i]].push_back(i);
          }
          
          for(i=1;i<nnn;i++)
               if(value[i]!=value[i+1])
                    int_end.insert(i);
          int_end.insert(nnn);
          
          while(mmm--)
          {
               cin>>lll>>rrr>>kkk;
               coUnt=0;
               low=*int_end.lower_bound(lll);
               
               if(low+1<=rrr)
coUnt+=upper_bound(k[kkk].begin(),k[kkk].end(),rrr)-upper_bound(k[kkk].begin(),k[kkk].end(),low);

		     if(min(low,rrr)-lll+1>=kkk)
			     coUnt++;
               
               cout<<coUnt<<endl;
          }
     }
     return 0;
}