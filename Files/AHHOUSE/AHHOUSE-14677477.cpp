#include<bits/stdc++.h>
using namespace std;

#define INF 100007
#define INf 100008
#define pb push_back

int main()
{
    int t,aa,bb,ff[105],tt[105],i,j,k,l,ve[11][11],panic[102],time[102],node,p1,t1;
    bool v[102];

    list<int> *pa;
    list<int>::iterator it;

    panic[101]=INf;
    time[101]=INf;

    cin>>t;
    while(t--)
    {
        cin>>aa>>bb;
        k=aa*bb;
        for(i=0;i<k;i++)
            cin>>ff[i];
        for(i=0;i<k;i++)
            cin>>tt[i];

        l=0;
        for(i=0;i<aa;i++)
            for(j=0;j<bb;j++)
            {
                panic[l]=INF;
                time[l]=INF;
                v[l]=false;
                ve[i][j]=l;
                l++;
            }

        pa=new list<int>[k];
        l=0;
        for(i=0;i<aa;i++)
            for(j=0;j<bb;j++)
            {
                if(i>0)
                    pa[l].pb(ve[i-1][j]);
                if(j>0)
                    pa[l].pb(ve[i][j-1]);
                if(i<aa-1)
                    pa[l].pb(ve[i+1][j]);
                if(j<bb-1)
                    pa[l].pb(ve[i][j+1]);
                l++;
            }

        list<int> c;
        c.pb(0);
        panic[0]=ff[0];
        time[0]=tt[0];

        for(j=1;j<k;j++)
        {
            node=101;
            for(it=c.begin();it!=c.end();it++)
            {
                i=*it;
                if(!v[i] && (panic[i]<panic[node] || ((panic[i]==panic[node])&&(time[i]<time[node]))))
                    node=i;
            }
            v[node]=true;

            if(node!=101)
            for(it=pa[node].begin();it!=pa[node].end();it++)
            {
                i=*it;
                if(!v[i])
                {
                    p1=panic[node]+ff[i];
                    t1=time[node]+tt[i];

                    if(panic[i]>p1 || (panic[i]==p1 && time[i]>t1))
                    {
                        panic[i]=p1;
                        time[i]=t1;
                        c.pb(i);
                    }
                }
            }
        }
        cout<<panic[k-1]<<" "<<time[k-1]<<endl;
    }
    return 0;
}