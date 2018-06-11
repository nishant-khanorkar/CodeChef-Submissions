#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int ttt,i,j,countss;
     char s1tr[4][15],s2tr[4][15];
     cin>>ttt;
     while(ttt--)
     {    
          countss=0;
          for(i=0;i<4;i++)
               cin>>s1tr[i];
          for(i=0;i<4;i++)
               cin>>s2tr[i];
          for(i=0;i<4;i++)
               for(j=0;j<4;j++)
                    if(strcmp(s1tr[i],s2tr[j])==0)
                         countss++;
          if(countss>=2)
               cout<<"similar\n";
          else
               cout<<"dissimilar\n";
     }
	return 0;
}