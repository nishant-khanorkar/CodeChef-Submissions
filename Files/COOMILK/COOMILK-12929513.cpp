#include <iostream>
#include<string.h>
using namespace std;

#define ll long long

int main() 
{
     ll t,n,i,flag;
     char a[100][100];
     cin>>t;
     while(t--)
     {
          cin>>n;
          cin>>a[0];
          
          
          flag=0;
          
          for(i=1;i<n;i++)
          {
               cin>>a[i];
               if( strcmp(a[i-1],"cookie")==0 && strcmp(a[i],"cookie")==0 )
               {
                    flag=1;
               }
          }
          if(flag==0 && strcmp(a[n-1],"milk")==0 )
               cout<<"YES\n";
          else  
               cout<<"NO\n";
     }

	return 0;
}