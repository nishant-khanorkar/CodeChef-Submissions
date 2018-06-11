#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gg,u,hh,k;
    char xx[100005];
    cin>>gg;
    while(gg--)
    {
        cin>>xx;
        hh=strlen(xx);
        hh--;
        k=0;
        for(u=1;u<hh;u++)
            if(xx[u-1]==xx[u] || xx[u-1]==xx[u+1])
            {
                k=1;
                break;
            }
        if(u==hh && xx[u-1]==xx[u])
            k=1;
        if(k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}