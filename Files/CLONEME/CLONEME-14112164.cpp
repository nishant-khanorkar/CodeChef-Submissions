#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
     int gg,hh,kk,i,j,p,q,r,s,l,xx[100005];
     cin>>gg;
     multiset<int> :: iterator l1,r1;
     while(gg--)
     {
          cin>>hh>>kk;
          for(i=1;i<=hh;i++)
               cin>>xx[i];
          while(kk--)
          {
               cin>>p>>q>>r>>s;
               l=0;
               
               multiset<int> le,re;
               for(j=p , i=r ; j<=q ; j++ , i++)
               {
                    le.insert(xx[j]);
                    re.insert(xx[i]);
               }
               
               for(l1=le.begin(),r1=re.begin();l1!=le.end();l1++,r1++)
                    if(*l1!=*r1)
                    {
                         l++;
                         if(l==2)
                              break;
                    }
               
               if(l==2)
                    cout<<"NO\n";
               else
                    cout<<"YES\n";
          }
     }
     return 0;
}