#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll gg,hh,kk,i,j,k;
    cin>>gg;

    while(gg--)
    {
        cin>>hh>>kk;
        ll a[20]={0},b=0,c[20]={0},d=0,e[20]={0};
        while(hh>0)
        {
            a[b++]=hh%10;
            hh/=10;
        }
        while(kk>0)
        {
            c[d++]=kk%10;
            kk/=10;
        }
        for(i=0;i<max(b,d);i++)
        {
            e[i]=(a[i]+c[i])%10;
        }
        ll flag=0;
        for(i=max(b,d)-1;i>=0;i--)
        {
            flag=10*flag+e[i];
        }
        cout<<flag<<endl;
    }
    return 0;
}