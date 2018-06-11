#include<bits/stdc++.h>
using namespace std;

#define ll long long

int cmmp(const void* p1, const void* p2)
{
     ll* arr1 = (ll*)p1;
     ll* arr2 = (ll*)p2;
     ll diff1 = arr1[0] - arr2[0];
     if (diff1)
          return diff1;
     return arr1[1] - arr2[1];
}

int main()
{
    ll gg,hh,i,j,k,u,v,pr,jl[100005],p,q,f,r,xy[100005][2];
    ll check,edges,temp;
    vector<ll>::iterator kk;
    cin>>gg;
    while(gg--)
    {
        cin>>u>>v;
        j=0;
        k=0;
        while(v--)
        {
            cin>>p>>q;
            if(p==0)
                jl[j++]=q;
            else
            {
                xy[k][1]=p;
                xy[k++][0]=q;
            }
        }
        v=k;
        qsort(xy,v,sizeof(xy[0]),cmmp);

        ll cnt[u+1]={0},value[u+1]={0};
        vector<ll> du[u+1];
        edges=0;
        sort(jl,jl+j);
        p=1;
        for(i=0;i<j;i++)
            if(value[jl[i]]==0)
            {
                value[jl[i]]=p;
                du[p].push_back(jl[i]);
                cnt[p++]++;
                edges++;
            }

        i=0;
        pr=0;
        q=0;
        while(i<v)
        {
            pr=xy[i][0];
            if(value[pr]==0)
            {
                p=value[xy[i][1]];
                value[pr]=p;
                du[p].push_back(pr);
                cnt[p]++;
            }
            q=0;
            while(i<v && xy[i][0]==pr)
            {
                if(xy[i][1]!=q)
                    edges++;
                q=xy[i++][1];
            }
        }

        check=(u*(u+1))/2;
        for(i=1;i<=u;i++)
        {
            if(cnt[i]>1)
            {
                k=cnt[i];
                j=0;
                for(kk=du[i].begin();kk!=du[i].end();kk++)
                    jl[j++]=*kk;

                sort(jl,jl+j);
                temp=(k-1)*jl[0];
                for(p=1;p<j;p++)
                    temp+=(k-p-1)*(jl[p]-jl[p-1]);
                check-=temp;
            }
        }

        if(check==edges)
            for(i=1;i<=u;i++)
                cout<<value[i]<<" ";
        else
            cout<<-1;
        cout<<endl;
    }
    return 0;
}