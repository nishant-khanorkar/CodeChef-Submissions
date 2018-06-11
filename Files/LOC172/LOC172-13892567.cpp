#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define ll long long

int comp(const void* p1, const void* p2) 
{
  ll* arr1 = (ll*)p1;
  ll* arr2 = (ll*)p2;
  ll diff1 = arr1[0] - arr2[0];
  if (diff1>0) 
    return 1;
  if(arr1[1]>arr2[1])
     return 1;
  return -1;
}

int main()
{
     ll a,b,n,x,y,z,ans,i,aa[1005][2],max,j,k;
     while(1)
     {
          cin>>a>>b;
          ans=0;
          if(a==-1 && b==-1)
               break;
          cin>>n;
          for(i=0;i<n;i++)
          {
               cin>>x>>y>>z;
               aa[i][0]=y-z<1?1:y-z;
               aa[i][1]=y+z>a?a:y+z;
          }
          max=0;
          qsort(aa,n,2*sizeof(ll),comp);
          for(i=0;i<n;i++)
          {
               for(k=aa[i][0];k<=aa[i][1];k++)
               {
                    ans=1;
                    for(j=i+1;j<n;j++)
                         if(aa[j][0]<=k && k<=aa[j][1])
                              ans++;
                         else
                              break;
                    if(ans>max)
                         max=ans;
               }
          }
          cout<<max<<endl;
     }
     return 0;
}