#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n,f;
    cin>>gg;

    char xe[100005];
    xe[0]='b';
    for(i=1;i<100002;i++)
        xe[i]='a';
    while(gg--)
    {
        cin>>hh>>kk;
        if(kk<=2)
        {
            cout<<"impossible"<<endl;
            continue;
        }
        m=hh/kk;
        xe[kk-1]='b';
        xe[kk]='\0';
        for(i=0;i<m;i++)
            cout<<xe;
        cout<<endl;
        xe[kk-1]='a';
        xe[kk]='a';
    }
    return 0;
}