#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll i,j,t,n,a[10000001]={0},k,sum;
     
     for(i=2;i<10000001;i++)
          if(a[i]==0)
               for(j=2*i;j<10000001;j=j+i)
                    a[j]=1;
     
     sum=0;
     a[0]=a[1]=0;
     for(i=2;i<10000001;i++)
     {
          if(a[i]==0)
               sum=sum+i;
          a[i]=sum;
     }
     
     
     cin>>t;
     while(t--)
     {
          cin>>n;
          cout<<a[n]<<endl;
     }
     
     return 0;
}