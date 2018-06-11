#include<stdio.h>
#include<stdlib.h>
#define ll long long
 
#define slld(a) scanf("%lld",&a)
#define slld1(a,b) scanf("%lld%lld",&a,&b)
 
int main()
{
     ll n,q,v[1000001]={0},i,degree,p,j,x,y,a,b,k=0,s[1000001][3];
     slld1(n,q);
     for(p=1;p<=q;p++)
     {
          slld(x);
          if(x==0)
          {
               slld1(a,b);
               degree=0;
               for(i=a;i<=b;i++)
                    if(v[i]==1)
                         degree=degree+1;
               
               if( b-a+1 !=degree)
               {
                    s[k][0]=a;
                    s[k][1]=b;
                    s[k][2]=b-a+1-degree;
                    k=k+1;
               }
          }
          else
          {
               slld(a);
               y=0;
               for(i=0;i<k;i++)
               {    
                    if(s[i][0]<=a && a<=s[i][1] && v[a]==0)
                    {
                         if(s[i][2]==1)
                              y++;
                         s[i][2]--;
                    }
               }
               v[a]=1;
               printf("%lld\n",y);
               fflush(stdout);
          }
     }
     return 0;
}