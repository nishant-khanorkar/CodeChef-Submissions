#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    int gg,kk,i,j,m,n;
    ll hh,p,ax[1001];
    cin>>gg;
    while(gg--)
    {
        cin>>m>>n>>j;
        for(i=0;i<j;i++)
            cin>>ax[i];
        sort(ax,ax+j);
        hh=0;
        kk=0;
        p=1;
        for(i=j-1;i>=0;i--,kk++)
        {
            if(kk==n)
            {
                kk=0;
                p++;
            }
            hh+=p*ax[i];
        }
        cout<<hh<<endl;
    }
    return 0;
}