#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct curV
{
    ll a;
    ll b;
    ll c;
    ll d;
}curV;

typedef struct ptoY
{
    ll qr;
    ll po;
    ll ans;
}ptoY;

int cmp(const void* aa,const void* bb)
{
     curV *k1=(curV *)aa;
     curV *k2=(curV *)bb;

     if(k1->b > k2->b)
          return 1;
     else if(k1->b==k2->b)
     {
         if(k1->a<k2->a)
            return 1;
         else
            return -1;
     }
     else
          return -1;
}

int cmpQD(const void* aa,const void* bb)
{
    ptoY *k1=(ptoY *)aa;
    ptoY *k2=(ptoY *)bb;

    if(k1->qr < k2->qr)
          return 1;
    else
          return -1;
}

int cmpQO(const void* aa,const void* bb)
{
    ptoY *k1=(ptoY *)aa;
    ptoY *k2=(ptoY *)bb;

    if(k1->po > k2->po)
          return 1;
    else
          return -1;
}

int main()
{
    ll gg,hh,kk,i,j,k,m,n,f,p,q,r,s;

    curV ylp[100005];

    n=pow(10,18)+9;
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        f=1;
        for(i=0;i<hh;i++)
        {
            cin>>p>>q>>r>>s;
            if(r||s)
                f=0;
            ylp[i].a=p;
            ylp[i].b=q;
            ylp[i].c=r;
            ylp[i].d=s;
        }
        cin>>kk;

        if(f)
        {
            qsort(ylp,hh,sizeof(curV),cmp);

            ptoY qry[kk];
            for(s=0;s<kk;s++)
            {
                cin>>qry[s].qr;
                qry[s].po=s;
            }

            qsort(qry,kk,sizeof(ptoY),cmpQD);
            i=0;
            for(s=0;s<kk;s++)
            {
                j=qry[s].qr;
                f=ylp[i].a+ylp[i].b*j;

                for(p=i+1;p<hh;p++)
                {
                    m=ylp[p].a+ylp[p].b*j;
                    if(m<=f)
                    {
                        f=m;
                        i=p;
                    }
                }
                qry[s].ans=f;
                //cout<<f<<endl;
            }

            qsort(qry,kk,sizeof(ptoY),cmpQO);
            for(s=0;s<kk;s++)
                cout<<qry[s].ans<<endl;
            continue;
        }

        while(kk--)
        {
            cin>>j;
            f=n;
            for(i=0;i<hh;i++)
            {
                m=ylp[i].a+ylp[i].b*j+ylp[i].c*j*j+ylp[i].d*j*j*j;
                f=min(f,m);
            }
            cout<<f<<endl;
        }
    }
    return 0;
}