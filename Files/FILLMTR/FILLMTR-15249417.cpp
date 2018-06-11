#include<bits/stdc++.h>
using namespace std;

int main()
{
    int xg,xa,xb,i,j,k,t,x,y,z,ck;
    cin>>xg;
    while(xg--)
    {
        cin>>xa>>xb;

        vector< pair<int,int> > qry[xa+1];
        int vl[xa+1]={0};

        while(xb--)
        {
            cin>>x>>y>>z;
            qry[x].push_back(make_pair(y,z));
            qry[y].push_back(make_pair(x,z));
        }

        ck=0;
        queue<int> pN;

        for(i=1;i<=xa;i++)
        {
            if(vl[i]!=0)
                continue;

            pN.push(i);

            while(!pN.empty())
            {
                k=pN.front();
                pN.pop();

                if(vl[k]==0)
                    vl[k]=1;

                t=qry[k].size();
                for(j=0;j<t;j++)
                {
                    x=qry[k][j].first;
                    y=qry[k][j].second;

                    if(vl[x]==0)
                    {
                        if(vl[k]==1)
                            vl[x]=y==0?1:2;
                        else
                            vl[x]=y==1?1:2;
                        pN.push(x);
                    }
                    else if(abs(vl[k]-vl[x])!=y)
                    {
                        ck=1;
                        goto HALT;
                    }
                }
            }
        }

        HALT:;

        if(ck==0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}