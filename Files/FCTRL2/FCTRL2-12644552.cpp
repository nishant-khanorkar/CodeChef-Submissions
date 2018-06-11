#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int t,n,i,j,k,x,y,m,a[101][200]={0},c[101]={0};
     a[0][0]=1;
     c[0]=1;
     
     for(i=1;i<=100;i++)
     {
          m=i-1;
          k=c[m];
          x=0;
          for(j=0;j<k;j++)
          {
               x+=i*a[m][j];
               a[i][j] = x%10;
               x=x/10;
          }
          
          while(x>0)
          {
               a[i][j++]=x%10;
               x/=10;
          }
          
          c[i]=j;
     }
     
     cin>>t;
     while(t--)
     {
          cin>>n;
          
          for(j=c[n]-1;j>-1;j--)
               cout<<a[n][j];
          cout<<endl;
     }
	return 0;
}