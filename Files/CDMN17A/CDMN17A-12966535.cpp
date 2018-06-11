#include <iostream> 
using namespace std; 
#define ll long long 
int main() 
{ 	
     ll t,n,k,a[100001],i,j,sum,y; 
     cin>>t; 	
     while(t--) 	
     { 	 
          cin>>n>>k; 	 
          sum=0; 
          
          for(i=0;i<n;i++) 	 
          { 	 
               cin>>a[i]; 	 
               y=a[i]%k; 	 
               if(k>a[i]) 	 
                   sum+=k-y; 	 
               else 	 
                   sum+=( y< (k-y) ? y : (k-y)); 	
          } 	 
          cout<<sum<<endl; 
     } 	
     return 0; 
     
}