#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000000

int main()
{
    ll gg,hh,kk,i,j,m,n,ax[1000005];
    char y[1000005],z;
    cin>>gg;
    while(gg--)
    {
        cin>>m;
        for(i=0;i<m;i++)
            cin>>ax[i];
        cin>>y;
        cin>>n;
        j=0;
        for(i=0;j!=3;i++)
            if(y[i]=='1')
                j++;
        i--;
        cout<<ax[(i+n)%m]<<endl;
    }
    return 0;
}