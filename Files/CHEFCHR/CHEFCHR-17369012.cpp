#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int gg,hh,kk,i,j,k,p[27]={0};
     char d[500005];
     cin>>gg;
     while(gg--)
     {
          cin>>d;
          hh=strlen(d);
          if(hh<4)
          {
               cout<<"normal"<<endl;
               continue;
          }
          for(i=0;i<4;i++)
               p[d[i]-'a']++;
          kk=0;
          if(p['c'-'a']&&p['h'-'a']&&p['e'-'a']&&p['f'-'a'])
               kk++;
          for(i=4;i<hh;i++)
          {
               p[d[i-4]-'a']--;
               p[d[i]-'a']++;
               if(p['c'-'a']&&p['h'-'a']&&p['e'-'a']&&p['f'-'a'])
                    kk++;
          }
          p[d[hh-1]-'a']=0;
          p[d[hh-2]-'a']=0;
          p[d[hh-3]-'a']=0;
          p[d[hh-4]-'a']=0;
          if(!kk)
               cout<<"normal"<<endl;
          else
               cout<<"lovely "<<kk<<endl;
     }
     return 0;
}