#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int gg;
     ll p;
     cin>>gg;
     while(gg--)
     {
          ll y;
          cin>>y;
          if(y==0)
          {
               cout<<"0 1\n";
               continue;
          }
          int j=0,c=0;
          ll b,a;
          p=y;
          ll k[34]={0},aa[34]={0},bb[34]={0};
          while(y>0)
          {
               aa[j]=1-y%2;
               bb[j]=0;
               k[j++]=y%2;
               c+=y%2;
               y/=2;
          }
          if(c==1)
          {
               cout<<p-1<<" "<<2*p<<"\n";
               continue;
          }
          if(j==c)
          {
               cout<<0<<" "<<p+1<<"\n";
               continue;
          }
          int i;
          y=1;a=b=0;
          for(i=0;i<j;i++)
          {
               a+=y*aa[i];
               y*=2;
          }
          cout<<a<<" "<<y<<endl;
     }
     return 0;
}