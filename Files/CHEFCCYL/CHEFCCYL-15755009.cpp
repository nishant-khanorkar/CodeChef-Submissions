#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct FS
{
    vector<int> cy;
    int s;
    int l;
    int r;
}FS;

int main()
{
    int gg,hh,kk,i,j,k,a,b,c,d,p,q,u,v;

    cin>>gg;
    while(gg--)
    {
        cin>>hh>>kk;

        FS cc[hh+1];
        for(k=1;k<=hh;k++)
        {
            cin>>a;
            cc[k].s=a;
            cc[k].cy.push_back(0);
            b=0;
            for(i=1;i<=a;i++)
            {
                cin>>c;
                b+=c;
                cc[k].cy.push_back(b);
            }
        }

        int x[hh+1];
        x[0]=0;
        for(k=1;k<hh;k++)
        {
            cin>>cc[k].r>>cc[k+1].l>>x[k];
            x[k]+=x[k-1];
        }
        cin>>cc[hh].r>>cc[1].l>>x[hh];
        x[hh]+=x[hh-1];

        int y[hh+1];
        y[0]=0;
        for(k=1;k<=hh;k++)
        {
            a=max(cc[k].l,cc[k].r);
            b=min(cc[k].l,cc[k].r);
            c=cc[k].cy[a-1]-cc[k].cy[b-1];
            d=cc[k].cy[cc[k].s]-c;
            y[k]=min(c,d)+y[k-1];
        }
        for(k=1;k<=kk;k++)
        {
            cin>>a>>b>>c>>d;

            if(b>d)
            {
                p=a;u=b;
                q=c;v=d;
            }
            else
            {
                p=c;u=d;
                q=a;v=b;
            }

            a=max(p,cc[u].l);
            b=min(p,cc[u].l);
            c=cc[u].cy[a-1]-cc[u].cy[b-1];
            d=cc[u].cy[cc[u].s]-c;

            i=min(c,d);

            a=max(q,cc[v].r);
            b=min(q,cc[v].r);
            c=cc[v].cy[a-1]-cc[v].cy[b-1];
            d=cc[v].cy[cc[v].s]-c;

            i+=min(c,d)+x[u-1]-x[v-1]+y[u-1]-y[v];

            a=max(p,cc[u].r);
            b=min(p,cc[u].r);
            c=cc[u].cy[a-1]-cc[u].cy[b-1];
            d=cc[u].cy[cc[u].s]-c;

            j=min(c,d);

            a=max(q,cc[v].l);
            b=min(q,cc[v].l);
            c=cc[v].cy[a-1]-cc[v].cy[b-1];
            d=cc[v].cy[cc[v].s]-c;

            j+=min(c,d)+x[hh]+y[hh]-(x[u-1]-x[v-1]+y[u]-y[v-1]);

            cout<<min(i,j)<<endl;
        }
    }
    return 0;
}