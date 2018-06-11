#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int nnn,j,top=0,c1=0,c0=0,n;
ll possBLT=-1,sub,ext,x,val[31];
long double prd,kkk;
bool flasH[31];
 
bool roots465(int zzz)
{
     if(zzz<nnn)
     {
          flasH[zzz]=false;
          bool a=roots465(zzz+1);
          if(a)
          {
               flasH[zzz]=true;
               return roots465(zzz+1)||a;
          }
     }
     else
     {
          prd=1;
          for(j=0;j<nnn;j++)
               if(flasH[j])
               {
                    prd=prd*val[j];
                    if(prd>kkk)
                         return false;
               }
          possBLT++;
          return true;
     }
}

int main()
{
     cin>>nnn>>kkk;
     n=nnn;
     for(j=0;j<nnn;j++)
     {
          cin>>x;
          if(x==0)
          {
               c0++;
               continue;
          }
          if(x==1)
          {
               c1++;
               continue;
          }
          if(x<=kkk)
               val[top++]=x;
     }
     nnn=top;
     roots465(0);
     if(c1>0 && kkk>0)
     {
          ext=1;
          for(j=1;j<=c1;j++)
               ext=ext*2;
          possBLT=possBLT*ext+ext-1;
     }
     if(c0>0)
     {
          nnn=n-c0;
          sub=1;
          for(j=1;j<=nnn;j++)
               sub=sub*2;
          sub--;
          ext=1;
          for(j=1;j<=c0;j++)
               ext=ext*2;
          ext--;     
          
          possBLT=possBLT+sub*ext+ext;
     }
     cout<<possBLT<<endl;
     return 0;
}