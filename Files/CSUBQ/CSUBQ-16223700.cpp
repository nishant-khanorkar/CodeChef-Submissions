#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll gg,hh,kk,i,j,k,m,n,p,q,f,ct,x,y;
    //cin>>gg;
    //while(gg--)
    {
        cin>>hh>>kk>>p>>q;
        ll px[hh+1]={0},le[hh+1],ri[hh+1];
        while(kk--)
        {
            cin>>f>>m>>n;
            if(f==1)
            {
                px[m]=n;
                continue;
            }

            stack<pair<ll,int> > stk;
            pair<ll,int> pr;

            stk.push(make_pair(px[m],m));

            for(i=m+1;i<=n;i++)
            {
                f=px[i];
                if(!stk.empty())
                {
                    pr=stk.top();
                    stk.pop();

                    while(pr.first<f)
                    {
                        ri[pr.second]=i-1;
                        if(stk.empty())
                           break;
                        pr=stk.top();
                        stk.pop();
                    }

                    if (pr.first > f)
                        stk.push(pr);
                }
                stk.push(make_pair(f,i));
            }
            while(!stk.empty())
            {
                pr=stk.top();
                ri[pr.second]=n;
                stk.pop();
            }



            stk.push(make_pair(px[n],n));

            for(i=n-1;i>=m;i--)
            {
                f=px[i];
                if(!stk.empty())
                {
                    pr=stk.top();
                    stk.pop();

                    while(pr.first<f)
                    {
                        le[pr.second]=i+1;
                        if(stk.empty())
                           break;
                        pr=stk.top();
                        stk.pop();
                    }

                    if (pr.first > f)
                        stk.push(pr);
                }
                stk.push(make_pair(f,i));
            }
            while(!stk.empty())
            {
                pr=stk.top();
                le[pr.second]=m;
                stk.pop();
            }

            /*
            cout<<endl<<"*****************"<<endl;
            for(i=m;i<=n;i++)
                cout<<px[i]<<"  ";
            cout<<endl<<"*****************"<<endl;
            for(i=m;i<=n;i++)
                cout<<le[i]<<"  ";
            cout<<endl<<"*****************"<<endl;
            for(i=m;i<=n;i++)
                cout<<ri[i]<<"  ";
            cout<<endl<<"*****************"<<endl;
            */

            ct=0;
            for(i=m;i<=n;i++)
            {
                if(p<=px[i] && px[i]<=q)
                {
                    x=i-le[i];
                    y=ri[i]-i;
                    ct+=1+x+y+x*y;
                }
            }
            cout<<ct<<endl;
        }
    }
    return 0;
}