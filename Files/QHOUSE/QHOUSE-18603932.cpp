#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() 
{
     ll i,j,x,y,z,a,b,c;
     ll left,right;
     char m[20];
     
     left=0,right=500;
     while(1)
     {
          a=(left+right)/2;
          cout<<"? "<<a<<" "<<0<<endl;
          fflush(stdout);
          cin>>m;
          if(strcmp(m,"YES")==0)
          {
               left=a+1;
               cout<<"? "<<left<<" "<<0<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"NO")==0)
               {
                    x=left-1;
                    break;
               }
          }
          else
          {
               right=a-1;
               cout<<"? "<<right<<" "<<0<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"YES")==0)
               {
                    x=right;
                    break;
               }
          }
     }
     x=x*2;
     
     cout<<"? "<<1000<<" "<<x<<endl;
     fflush(stdout);
     cin>>m;
     if(strcmp(m,"YES")==0)
     {
          y=1000;
          goto AAA;
     }
     
     left=x/2,right=1000;
     while(1)
     {
          a=(left+right)/2;
          cout<<"? "<<a<<" "<<x<<endl;
          fflush(stdout);
          cin>>m;
          if(strcmp(m,"YES")==0)
          {
               left=a+1;
               cout<<"? "<<left<<" "<<x<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"NO")==0)
               {
                    y=left-1;
                    break;
               }
          }
          else
          {
               right=a-1;
               cout<<"? "<<right<<" "<<x<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"YES")==0)
               {
                    y=right;
                    break;
               }
          }
     }
     AAA:;
     
     cout<<"? "<<0<<" "<<1000<<endl;
     fflush(stdout);
     cin>>m;
     if(strcmp(m,"YES")==0)
     {
          z=1000;
          goto BBB;
     }
     
     left=x,right=1000;
     while(1)
     {
          a=(left+right)/2;
          cout<<"? "<<0<<" "<<a<<endl;
          fflush(stdout);
          cin>>m;
          if(strcmp(m,"YES")==0)
          {
               left=a+1;
               cout<<"? "<<0<<" "<<left<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"NO")==0)
               {
                    z=left-1;
                    break;
               }
          }
          else
          {
               right=a-1;
               cout<<"? "<<0<<" "<<right<<endl;
               fflush(stdout);
               cin>>m;
               if(strcmp(m,"YES")==0)
               {
                    z=right;
                    break;
               }
          }
     }
     BBB:;

     z=z-x;
     cout<<"! "<<(x*x+y*z)<<endl;
     
	return 0;
}