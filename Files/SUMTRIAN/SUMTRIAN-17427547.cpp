#include<iostream>
using namespace std;
#define ll long long

int main()
{
     int i,j,k,n,m,t;
     cin>>t;
     while(t--)
     {
          cin>>n;
          int a[n+1][n+1];
          for(i=1;i<=n;i++)
               for(j=1;j<=i;j++)
                    cin>>a[i][j];
          for(i=n-1;i>=1;i--)
               for(j=1;j<=i;j++)
                    a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
          cout<<a[1][1]<<endl;
     }
     return 0;
}