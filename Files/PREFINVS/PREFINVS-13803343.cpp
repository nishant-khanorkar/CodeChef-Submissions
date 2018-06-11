#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
     int l,i,cnt=0,oo=0;
     char xx[100005],y;
     cin>>xx;
     l=strlen(xx);

     for(i=0;i<l;)
     {
          y=xx[i];
          while(xx[i]==y)i++;
          cnt++;
     }
     if(xx[l-1]=='0')
          cnt--;
     cout<<cnt;
     return 0;
}
