#include <iostream>
using namespace std;

int main() 
{
	int n,f,i,t,y;
		
	cin>>t;
	while(t--)
	{
	     cin>>n;
	     int a[n];
     	for(i=0;i<n;i++)
		     cin>>a[i];
     		    
		cin>>f;  
		int s[f];
		for(i=0;i<f;i++)
     		     cin>>s[i];
     		   
     	y=0; 
     	for(i=0;i<n;i++)
		     if(a[i]==s[y])
     	     {
                    y++;
     		     if(y==f)
                         break;
     	     }
		if(y==f)
		     cout<<"Yes"<<endl;
     	else
     	     cout<<"No"<<endl;
	}
	return 0;
}