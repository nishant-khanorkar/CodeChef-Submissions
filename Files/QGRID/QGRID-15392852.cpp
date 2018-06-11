#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1000000000000000005

ll tr[270007];
//Max. height of segment tree= 2*pow(2,(int)ceil(log2(100005)))-1=262143;

ll lc(ll h)//node's left-child
{
    return 2*h+1;
}

ll rc(ll h)//node's right-child
{
    return 2*h+2;
}

void sumRepetitions(ll pt,ll l,ll r,ll left,ll right,ll value)
{
    ll x=lc(pt);
    ll y=rc(pt);
    ll z=(l+r)/2;
    if(l!=r)
    {
        tr[x]=(tr[x]+tr[pt]);
        tr[y]=(tr[y]+tr[pt]);
        tr[pt]=0;
    }

    if(right<l)
        return;
    if(left>r)
        return;
    if(left<=l && r<=right)
    {
        tr[pt]=(tr[pt]+value);
        return;
    }
    sumRepetitions(x,l,z,left,right,value);
    sumRepetitions(y,z+1,r,left,right,value);
}

ll findRRepetitions(ll pt,ll l,ll r,ll nw)
{
	if(l!=r)
    {
        ll x=lc(pt);
        ll y=rc(pt);
        ll z=(l+r)/2;

        tr[x]=(tr[x]+tr[pt]);
        tr[y]=(tr[y]+tr[pt]);
        tr[pt]=0;

        if(nw>z)
            return findRRepetitions(y,z+1,r,nw);
        else
            return findRRepetitions(x,l,z,nw);
    }
    else
        return tr[pt];
}

int main()
{
    ll gg,hh,kk,i,j,tp,a,b,c,d;
    ll y;

    ll pR[4][100005],pC[4][100005],p,q,r,zz;
    ll dt[4][100005],w,e,f;

    cin>>gg>>hh>>kk;

    if(gg==1)
        memset(tr,0,sizeof(tr));

    ll val[gg+1][hh+1]={0};
    ll pD[gg][hh+1],pRi[gg+1][hh];

    for(i=1;i<gg;i++)
        for(j=1;j<=hh;j++)
            cin>>pD[i][j];

    for(i=1;i<=gg;i++)
        for(j=1;j<hh;j++)
            cin>>pRi[i][j];

    zz=gg*hh;

    for(i=0;i<kk;i++)
    {
        cin>>tp;
        if(tp==1)
        {
            cin>>a>>b>>c>>d>>y;

            if(gg==1)
            {
                if(b>d)
                    swap(b,d);
                sumRepetitions(0,0,hh-1,b-1,d-1,y);
                continue;
            }

            if(a==c && b==d)
            {
                val[a][b]+=y;
                continue;
            }

            for(p=1;p<=gg;p++)
                for(q=1;q<=hh;q++)
                    dt[p][q]=INF;

            int v[gg+1][hh+1]={0};

            dt[a][b]=0;

            for(p=1;p<zz;p++)
            {
                w=INF;
                for(q=1;q<=gg;q++)
                    for(r=1;r<=hh;r++)
                        if(dt[q][r]<=w && v[q][r]==0)
                            w=dt[q][r],e=q,f=r;

                v[e][f]=1;
                if(e==c && f==d)
                    break;

                if(w==INF)
                    continue;
                if(e>1)
                {
                    if(v[e-1][f]==0 && (dt[e][f]+pD[e-1][f] < dt[e-1][f]))
                    {
                        pR[e-1][f]=e;
                        pC[e-1][f]=f;
                        dt[e-1][f]=dt[e][f]+pD[e-1][f];
                    }
                }

                if(e<gg)
                {
                    if(v[e+1][f]==0 && (dt[e][f]+pD[e][f] < dt[e+1][f]))
                    {
                        pR[e+1][f]=e;
                        pC[e+1][f]=f;
                        dt[e+1][f]=dt[e][f]+pD[e][f];
                    }
                }

                if(f>1)
                {
                    if(v[e][f-1]==0 && (dt[e][f]+pRi[e][f-1] < dt[e][f-1]))
                    {
                        pR[e][f-1]=e;
                        pC[e][f-1]=f;
                        dt[e][f-1]=dt[e][f]+pRi[e][f-1];
                    }
                }

                if(f<hh)
                {
                    if(v[e][f+1]==0 && (dt[e][f]+pRi[e][f] < dt[e][f+1]))
                    {
                        pR[e][f+1]=e;
                        pC[e][f+1]=f;
                        dt[e][f+1]=dt[e][f]+pRi[e][f];
                    }
                }
            }

            e=c,f=d;
            do
            {
                val[e][f]+=y;
                p=e;
                q=f;
                e=pR[p][q];
                f=pC[p][q];
            }while(e!=a || f!=b);
            val[a][b]+=y;
        }
        else
        {
            cin>>a>>b;
            if(gg==1)
                val[a][b]=findRRepetitions(0,0,hh-1,b-1);
            cout<<val[a][b]<<endl;
        }
    }
    return 0;
}