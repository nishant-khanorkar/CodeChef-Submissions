#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 200000

list<int> pathd[N];
ll pXor[N],dpt[N]={0};
int vi[N]={0};
ll u,v,w,x,ans,p,q;

int vrtx,qry,i,c,h,maxd=-1;

void dDFS(int cr,int depth)
{
    vi[cr]=1;
    dpt[depth]^=pXor[cr];
    if(depth>maxd)
        maxd=depth;
    list<int>::iterator j;
    for(j=pathd[cr].begin();j!=pathd[cr].end();j++)
        if(vi[*j]==0)
            dDFS(*j,depth+1);
}

int main()
{
    cin>>vrtx>>qry;
    i=vrtx-1;
    while(i--)
    {
        cin>>c>>h;
        pathd[c].push_back(h);
        pathd[h].push_back(c);
    }

    for(i=0;i<vrtx;i++)
        cin>>pXor[i];

    dDFS(0,0);

    ll dn2[maxd+1]={0};
    for(i=2;i<=maxd;i+=2)
        dn2[i]=1+dn2[i/2];


    ll aannss[1000007],FM=-1;
    aannss[0]=pXor[0];

    for(i=0;;i++)
    {
        ans=pXor[0];

        p=0;
        q=1;

        for(v=1;v<=maxd;v++)
        {
            x=i+v;
            if(x<=maxd)
                p+=dn2[x];
            else
                while(x%2==0)
                {
                    x/=2;
                    p++;
                }

            q+=dn2[v];

            if(p>=q)
            {
                p-=q;
                q=0;
            }
            else
            {
                q-=p;
                p=0;
                ans^=dpt[v];
            }
        }
        if(ans==aannss[0])
        {
            FM=i+1;
            break;
        }
        else
            aannss[i+1]=ans;

    }

    for(i=0;i<qry;i++)
    {
        cin>>u;
        u%=FM;
        cout<<aannss[u]<<endl;
    }
    return 0;
}