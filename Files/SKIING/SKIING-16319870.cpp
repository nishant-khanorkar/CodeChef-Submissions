#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct Pro
{
    ll a;
    ll b;
    ll c;
}pro;


int cmp(const void* aa,const void* ba)
{
     Pro *k1=(Pro *)aa;
     Pro *k2=(Pro *)ba;

     if(k1->a < k2->a)
          return 1;
     else
          return -1;
}

ll xy[1005][1005];


void ddffss(ll x,ll y,ll z)
{
    if(xy[y][z]==-1)
        return;
    xy[y][z]=-1;
    if(x >= xy[y-1][z])
		ddffss(xy[y-1][z],y-1,z);
    if(x >= xy[y+1][z])
		ddffss(xy[y+1][z],y+1,z);
    if(x >= xy[y][z-1])
		ddffss(xy[y][z-1],y,z-1);
    if(x >= xy[y][z+1])
		ddffss(xy[y][z+1],y,z+1);
}

int main()
{
    ll gg,hh,kk,i,j,k,m,n,ct,exponent,p;

    cin>>gg;
    while(gg--)
    {
        cin>>hh>>kk;
        m=hh*kk;
        Pro pro[m+1];

        for(i=0;i<=hh+1;i++)
            xy[i][0]=-1,xy[i][kk+1]=-1;
        for(i=0;i<=kk+1;i++)
            xy[0][i]=-1,xy[hh+1][i]=-1;
        k=0;
        for(i=1;i<=hh;i++)
        {
            for(j=1;j<=kk;j++)
            {
                cin>>xy[i][j];
                pro[k].a=xy[i][j];
                pro[k].b=i;
                pro[k].c=j;
                k++;
            }
        }
        qsort(pro,k,sizeof(Pro),cmp);

        ll ctr=0;
        for(i=0;i<k;i++)
        {
            if(xy[pro[i].b][pro[i].c]!=-1)
            {
                ctr++;
                ddffss(pro[i].a,pro[i].b,pro[i].c);
            }
        }
        cout<<ctr<<endl;
    }
    return 0;
}