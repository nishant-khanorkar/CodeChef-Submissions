#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int gg,hh,yy,i,j,u,v;
    cin>>gg;
    while(gg--)
    {
        cin>>hh>>yy;
        list<int> ab[hh];
        int ivv[hh]={0},vv[hh]={0},ans=0;
        list<int>::iterator k;
        for(i=0;i<yy;i++)
        {
            cin>>u>>v;
            ab[u].push_back(v);
            ab[v].push_back(u);
            ivv[u]=ivv[v]=1;
        }
        for(i=0;i<hh;i++)
        {
            if(ivv[i]==0)
            {
                ans++;
                continue;
            }
            if(vv[i]==0)
            {
                ans++;
                list<int> jj;
                jj.push_back(i);
                vv[i]=1;
                while(!jj.empty())
                {
                    j=jj.front();
                    jj.pop_front();
                    for(k=ab[j].begin();k!=ab[j].end();k++)
                        if(vv[*k]==0)
                        {
                            jj.push_back(*k);
                            vv[*k]=1;
                        }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}