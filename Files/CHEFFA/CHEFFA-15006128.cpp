#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

int dtx[400];

ll iterate20(int x1,int x2)
{
    if(x1==x2)
        return 1;
    ll ans=0;
    if (dtx[x1]!=0 && dtx[x1+1]!=0)
    {
        dtx[x1+2]++;
        dtx[x1+1]--;
        dtx[x1]--;
        ans=iterate20(x1,max(x2,x1+2));
        dtx[x1]++;
        dtx[x1+1]++;
        dtx[x1+2]--;
    }
    ans+=iterate20(x1+1,x2);
    ans%=M;
    return ans;
}

int main()
{
    int gg,hh,u;
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        memset(dtx,0,400*sizeof(int));
        for(u=0;u<hh;u++)
            cin>>dtx[u];
        cout<<iterate20(0,hh)<<endl;
    }
    return 0;
}