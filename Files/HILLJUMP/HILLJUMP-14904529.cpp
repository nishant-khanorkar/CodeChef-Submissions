#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll gg,hh,i,j,xy[100005],k,u,v,w;
    cin>>gg>>hh;
    for(i=1;i<=gg;i++)
        cin>>xy[i];
    for(j=0;j<hh;j++)
    {
        cin>>k;
        if(k==1)
        {
            cin>>u>>v;
            w=u;
            for(i=u;i<=gg;i++)
                if(xy[i]>xy[w])
                {
                    if(i-w<=100)
                    {
                        w=i;
                        v--;
                        if(v==0)
                            break;
                    }
                    else
                        break;
                }
            cout<<w<<endl;
        }
        else
        {
            cin>>u>>v>>w;
            for(i=u;i<=v;i++)
                xy[i]+=w;
        }
    }
    return 0;
}