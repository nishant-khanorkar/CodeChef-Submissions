#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fastPOW(ll a,ll x,ll M)
{
    a%=M;
    ll result=1;
    while(x>0)
    {
        if(x%2==1)
            result=(result*a)%M;
        a=(a*a)%M;
        x>>=1;
    }
    return result;
}

int main()
{
    ll gg,hh,kk,i,j,k,m,n,x,y,ct,exponent,p;
    ll xy[10005];
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        ll vv[105]={0};
        for(i=0;i<hh;i++)
        {
            cin>>j;
            vv[j]++;
            xy[i]=j;
        }
        sort(xy,xy+hh);
        double ans=vv[xy[hh-1]]*vv[xy[hh-2]];
        double f=vv[xy[hh-1]];
        if(xy[hh-1]==xy[hh-2])
            ans= f*(f-1)/2;

        double h=hh;
        ans=2*ans/(h*(h-1));
        cout<<ans<<endl;
    }
    return 0;
}