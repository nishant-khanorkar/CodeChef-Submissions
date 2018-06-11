#include<bits/stdc++.h>
using namespace std;

bool brnh[100005];
int stk[100005],t=-1,vv[100005]={0};

void ddFFss(int q,list<int> vt[])
{
    if(brnh[q])
        return;

    vv[q]=1;
    stk[++t]=q;

    list<int>::iterator i;
    for(i=vt[q].begin();i!=vt[q].end();i++)
    {
        //cout<<" *** "<<*i<<endl;
        if(!vv[*i])
            ddFFss(*i,vt);
    }
}

int main()
{
    int gg,hh,kk,i,j,k,m,n,x,y,q,p;

    cin>>gg;
    while(gg--)
    {
        cin>>hh>>kk;

        list<int> vx[hh+1];

        for(i=1;i<hh;i++)
        {
            brnh[i]=false;
            cin>>p>>q;
            vx[p].push_back(q);
            vx[q].push_back(p);
        }
        brnh[hh]=false;

        while(kk--)
        {
            cin>>p>>q;
            if(p==1)
            {
                brnh[q]=true;
                continue;
            }

            ddFFss(q,vx);
            j=0;
            for(i=hh;i>=1;i--)
                if(vv[i]==0)
                {
                    j++;
                    p=i;
                    if(j==2)
                        break;
                }

            if(j==2)
                cout<<p<<endl;
            else
                cout<<-1<<endl;

            for(i=0;i<=t;i++)
                vv[stk[i]]=0;
            t=-1;
        }
    }
    return 0;
}