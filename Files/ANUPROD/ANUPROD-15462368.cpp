#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

int main()
{
    ll i,j,k,gg,xx[1005],an[1005];
    cin>>gg;
    j=1;
    for(i=0;i<gg;i++)
    {
        cin>>k;
        j=(j*k)%M;
    }
    cout<<j;
    return 0;
}