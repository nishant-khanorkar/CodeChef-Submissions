#include<iostream>

using namespace std;

#define ll long long
 
int main()
{
     ll t,n,o1,o2,i,hs,a[1000001],sum,exitPointer,entryPointer;
     cin>>t;
     while(t--)
     {
          cin>>o1>>o2;
          
          hs=1+o1/2;
  
          n=o1*o2;
          
          ll win[o2]; 
          
          sum=0;
          for(i=0;i<o2;i++)
          {
               win[i]=0;
               
               cin>>a[i];
               
               if(a[i]==1)
                    sum++;
               else
                    sum--;
          }
          
          if(sum>0)
          {
               win[0]++;
          }
          
          exitPointer=0;
          
          for(entryPointer=o2 ; entryPointer<n ; entryPointer++)
          {
               cin>>a[entryPointer];
               
               if(a[entryPointer]==1 && a[exitPointer]==0)
                    sum+=2;
               if(a[entryPointer]==0 && a[exitPointer]==1)
                    sum-=2;
               
               exitPointer++;
               
               if(sum>0)
                    win[(entryPointer+1)%o2]++;
          }
          
          i=0;
          for(entryPointer=n;entryPointer<n+o2-1;entryPointer++)
          {
               if(a[i]==1 && a[exitPointer]==0)
                    sum+=2;
               if(a[i]==0 && a[exitPointer]==1)
                    sum-=2;
               
               exitPointer++;
               i++;
               
               if(sum>0)
                    win[(entryPointer+1)%o2]++;
          }
          
          for(i=0;i<o2;i++)
          {
               if(win[i]>=hs)
                    goto WWW;
          }
          
          cout<<0<<endl;
          continue;
          WWW: cout<<1<<endl;
     }
     return 0;
}