#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
     int nn;
     cin>>nn;
     int i,j,k,m;
     
     char s[20];
     
     int tt[21][nn+1][26]={0};
     for(i=1;i<=nn;i++)
     {
          cin>>s;
          m=strlen(s);
          for(j=0;j<m;j++)
               tt[j+1][i][s[j]-'a']=1;
     }
     
     for(k=1;k<=20;k++)
          for(i=1;i<=nn;i++)
               for(j=0;j<26;j++)
                    tt[k][i][j]+=tt[k][i-1][j];
                    
     int qq,a,b,c,y;
     char d;
     cin>>qq;
     while(qq--)
     {
          cin>>a>>b>>c>>d;
          y=tt[c][b][d-'a']-tt[c][a-1][d-'a'];
          cout<<y<<endl;
     }
               
     return 0;
}    
