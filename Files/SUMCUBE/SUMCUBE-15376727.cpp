#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

int hh,j,k;
bool val[100005];
ll ans,z,p;

void bt(int a,vector<vector<bool> > v)
{
    if(a<=hh)
    {
        val[a]=false;
        bt(a+1,v);
        val[a]=true;
        bt(a+1,v);
    }
    else
    {
        z=0;
        int check[hh+1]={0};
        list<int> q;
        for(j=1;j<=hh;j++)
            if(val[j])
            {
                q.push_back(j);
                check[j]=1;
                break;
            }

        if(j<=hh)
        {
            while(!q.empty())
            {
                k=q.front();
                q.pop_front();

                for(j=1;j<=hh;j++)
                    if(val[j] && v[k][j] && check[j]==0)
                    {
                        q.push_back(j);
                        check[j]=1;
                    }
            }
        }
        else
            return;

        for(j=1;j<=hh;j++)
            if(val[j] && check==0)
                return;

        for(j=1;j<hh;j++)
            if(val[j])
                for(k=j+1;k<=hh;k++)
                    if(val[k] && v[j][k])
                        z++;

        if(p==2)
            z=z*z;
        else if(p==3)
            z=z*z*z;
        ans=(ans+z)%M;
    }
}

int main()
{
    int gg,jj,i,x,y;
    cin>>gg;
    while(gg--)
    {
        cin>>hh>>jj>>p;
        vector< vector<bool> > vv(hh+1,vector<bool>(hh+1,false));
        for(i=1;i<=jj;i++)
        {
            cin>>x>>y;
            vv[x][y]=true;
            vv[y][x]=true;
        }
        ans=0;
        bt(1,vv);
        cout<<ans<<endl;
    }
    return 0;
}