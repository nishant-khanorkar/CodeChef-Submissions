#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     ll gg,hh,jj,i,xp[100005],sm[100005],pp,qq,r,s,p,j,q,a,b,c,d;
     cin>>gg;
     while(gg--)
     {
          cin>>hh>>qq;
          p=0;
          s=-pow(10,12);
          for(i=1;i<=hh;i++)
          {
               cin>>xp[i];
               p+=xp[i];
               sm[i]=p;
               if(p>s)
                    s=p;
          }
          
          r=-pow(10,12);
          q=0;
          for(i=hh;i>=1;i--)
          {
               q+=xp[i];
               if(q>r)
                    r=q;
          }
          
          
          sm[0]=a=b=c=0;
          d=-pow(10,12);
          
          for(i=1;i<=hh;i++)
          {
               if(sm[i]-sm[a]>d)
               {
                    b=a+1;
                    c=i;
                    d=sm[i]-sm[a];
               }
               if(sm[i]<sm[a])
                    a=i;
          }
          
          if(qq==1)
               cout<<d<<endl;
          else
          {
               ll aa[5];
               aa[0]=d;
               aa[1]=p*qq;
               aa[2]=s+r;
               aa[3]=s+r+(qq-2)*p;
               sort(aa,aa+4);
               cout<<aa[3]<<endl;
          }
     }
     return 0;
}