#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cmp(const void *a,const void *b)
{
     if(*(ll *)a < *(ll *)b)
          return 1;
     else
          return -1;
}

int main()
{
     ll ff,gg,kk[1000005],sum,ans,i,j;
     cin>>gg>>ff;
     ans=0;
     for(i=1;i<=gg;i++)
     {
          j=i*i+ff;
          j=(ll)sqrt(j);
          ans+=j-i;
     }
     cout<<ans<<endl;
     return 0;
}