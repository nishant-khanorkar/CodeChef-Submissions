#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MXM 1000000000000000000

unsigned long long s[2];

unsigned long long xorshift128plus() {
	unsigned long long x = s[0];
	const unsigned long long y = s[1];
	x ^= x << 23;
	s[1] = x ^ y ^ (x >> 17) ^ (y >> 26);
	return s[0] = y;
}

const int MX = 1000;


ll AA[MX][MX];
ll BB[MX][MX];
int ans[MX][MX],V;

void MCSPT()
{
     int pt[V];
     ll ky[V];
     bool mST[V];

     for(int i=0;i<V;i++)
        ky[i]=MXM,mST[i]=false;

     ky[0]=0;
     pt[0]=-1;

     for(int c=0;c<V-1;c++)
     {
        ll m=MXM,u;

        for(int v=0;v<V;v++)
            if(!mST[v] && ky[v]<m)
                m=ky[v], u=v;

        mST[u]=true;
        for (int v=0;v<V;v++)
          if (u!=v && !mST[v] && AA[u][v]< ky[v])
             pt[v]=u, ky[v]=AA[u][v];
     }
     for(int i=1;i<V;i++)
        ans[i][pt[i]]=ans[pt[i]][i]=1;
}

int main()
{
    int gg,hh,kk,p,q,u,v,w,e;
    ll ax,bx;
    cin>>gg;

    while(gg--)
    {
        cin>>V>>u>>v;

        for(p=0;p<V;p++)
        {
            ans[p][p]=0;
            cin>>s[0]>>s[1];
            for(q=p+1;q<V;q++)
            {
                AA[p][q]=AA[q][p]=xorshift128plus()%(u+1);
                ans[p][q]=ans[q][p]=0;
            }
        }

        int mnn[V];
        for(p=0;p<V;p++)
        {
            cin>>s[0]>>s[1];
            ll hr=MXM;
            int de=0;
            for(q=0;q<V;q++)
            {
                BB[p][q]=xorshift128plus()%(v+1);
                if(BB[p][q]<hr && q!=0)
                    hr=BB[p][q],de=q;
            }
            mnn[p]=de;
        }

        MCSPT();

        int yp=0;
        for(p=46;p<V;p+=23)
        {
            int f=0;
            for(q=0;q<V;q++)
                f+=ans[p][q];
            if(f<mnn[p])
            {
                f=mnn[p]-f;
                f/=4;
                for(q=0;q<V;q++)
                {
                    if(f>0)
                    {
                        yp++;
                        if(ans[p][q]==0 && p!=q)
                        {
                            ans[p][q]=ans[q][p]=1;
                            f--;
                        }

                        if(yp==30)
                            goto BTR;
                    }
                    else
                        break;
                }
            }
        }
        BTR:;
        for(p=0;p<V;p++)
        {
            for(q=0;q<V;q++)
                cout<<ans[p][q];
            cout<<endl;
        }
    }
    return 0;
}