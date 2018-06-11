#include<bits/stdc++.h>
using namespace std;
#define ll long long

//lcs-geeksforgeeks

int main()
{
     int gg,hh,qq,i,j,p,q,xp[5005][5005]={0},a,b,c,d;
     char z1[5009],z2[5009],z3[5009],z4[5009];
     
     cin>>gg;
     while(gg--)
     {
          cin>>hh>>qq;
          cin>>z1>>z2;
          
          p=1;
          a=0;
          z3[a++]=z1[0];
          for(i=1;i<hh;i++)
               if(z1[i]!=z3[a-1])
               {
                    z3[a++]=z1[i];
                    p++;
               }
          
          q=1;
          b=0;
          z4[b++]=z2[0];
          for(i=1;i<qq;i++)
               if(z2[i]!=z4[b-1])
               {
                    z4[b++]=z2[i];
                    q++;
               }
          
          for(i=1;i<=a;i++)
               for(j=1;j<=b;j++)
                    if(z3[i-1]==z4[j-1])
                         xp[i][j]=xp[i-1][j-1]+1;
                    else
                         xp[i][j]=max(xp[i-1][j],xp[i][j-1]);
                         
          
          c=p+q-xp[a][b];
          
          cout<<c<<endl;
     }
     return 0;
}