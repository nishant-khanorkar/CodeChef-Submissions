#include<bits/stdc++.h>
using namespace std;

int cmp(const  void *a,const void *b)
{
     return(*(int*)a-*(int*)b);
}

int main()
{
     int ttt,nnn,aaa[100005],jjj,iii;
     cin>>ttt;
     while(ttt--)
     {
          cin>>nnn;
          nnn*=2;
          for(iii=0;iii<nnn;iii++)
               cin>>aaa[iii];
          qsort(aaa,nnn,sizeof(int),cmp);
          nnn/=2;
          jjj=nnn-1+(nnn+1)/2;
          cout<<aaa[jjj]<<endl;
          
          for(iii=0;iii<nnn;iii++)
               cout<<aaa[iii]<<" "<<aaa[iii+nnn]<<" ";
          cout<<endl;
     }
     return 0;
}