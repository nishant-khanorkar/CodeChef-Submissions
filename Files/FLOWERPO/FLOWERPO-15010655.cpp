#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define TT 3030
#define pb push_back
#define clr clear
#define lb lower_bound
#define bv begin
#define ev end

ll leftPt(ll a,ll b)
{
    return a<b?a:b;
}

int main()
{
    int gg,u,hh,ti,cc,j,k,p1,p2;
    vector<int> x1,x2;
    ll x,ptB[TT][TT],ptA[TT][TT],ptC[TT][TT],ptD[TT][TT],ans;
    cin>>gg;
    vector<ll> v,s1,s2;
    while(gg--)
    {
        cin>>hh>>ti>>cc;
        v.pb(0);
        for(u=1;u<=hh;u++)
        {
            cin>>x;
            v.pb(x);
        }
        if(hh==1)
        {
            cout<<0<<endl;
            v.clr();
            continue;
        }
        memset(ptB[hh],0,sizeof(ptB[hh]));
        memset(ptA[1],0,sizeof(ptA[1]));
        for(u=hh-1;u>=1;u--)
        {
            for(j=0;j<=ti;j++)
            {
                if(j==0)
                {
                    ptB[u][j]=1e18;
                    continue;
                }
                ptB[u][j]=1e18;
                for(k=u+1;k<=hh;k++)
                {
                    ll cost = (v[k]-v[u])*(v[k]-v[u]);
                    ptB[u][j]=leftPt(ptB[u][j],cost+ptB[k][j-1]);
                }
            }
        }
        for(u=2;u<=hh;u++)
        {
            for(j=0;j<=ti;j++)
            {
                if(j==0)
                {
                    ptA[u][j]=1e18;
                    continue;
                }
                ptA[u][j]=1e18;
                for(k=u-1;k>=1;k--)
                {
                    ll cost = (v[u]-v[k])*(v[u]-v[k]);
                    ptA[u][j]=leftPt(ptA[u][j],cost+ptA[k][j-1]);
                }
            }
        }
        if(cc==hh)
        {
            x2.pb(hh+1);
            s2.pb(0);
        }
        else if(cc==1)
        {
            x1.pb(0);
            s1.pb(0);
        }
        for(u=cc+1;u<=hh;u++)
        {
            x2.pb(u);
            s2.pb(v[u]-v[cc]);
        }
        for(u=cc-1;u>=1;u--)
        {
            x1.pb(u);
            s1.pb(v[cc]-v[u]);
        }

        p1=0;
        p2=0;

        if(s1[0]<s2[0])
            p1=lb(s1.bv(),s1.ev(),s2[0])-s1.bv();
        else
            p2=lb(s2.bv(),s2.ev(),s1[0])-s2.bv();

        ans=1e18;

        for(u=p1;u<s1.size();u++)
        {
            int temp=lb(s2.bv(),s2.ev(),s1[u])-s2.bv();
            if(temp<s2.size())
                ans=leftPt(ans,s1[u]*s1[u]+ptA[x1[u]][ti-1]+ptB[temp][ti-1]);
            else
                ans=leftPt(ans,s1[u]*s1[u]+ptA[x1[u]][ti-1]);
        }
        for(u=p2;u<s2.size();u++)
        {
            int temp=lb(s1.bv(),s1.ev(),s2[u])-s1.bv();
            if(temp<s1.size())
                ans=leftPt(ans,s2[u]*s2[u]+ptB[x2[u]][ti-1]+ptA[temp][ti-1]);
            else
                ans=leftPt(ans,s2[u]*s2[u]+ptB[x2[u]][ti-1]);
        }
        v.clr();s1.clr();s2.clr();x1.clr();x2.clr();
        cout<<ans<<endl;
    }
    return 0;
}