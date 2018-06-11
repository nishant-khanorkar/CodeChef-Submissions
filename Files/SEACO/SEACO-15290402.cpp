#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007

ll i,en,em,repetitions,input[100005][3];

//Repetition Query-Range Segment Tree(RQRST)
ll tr[270007];
//Max. height of segment tree= 2*pow(2,(int)ceil(log2(100005)))-1=262143;

ll lc(ll h)//node's left-child
{
    return 2*h+1;
}

ll rc(ll h)//node's right-child
{
    return 2*h+2;
}

void sumRepetitionsRQRST(ll pt,ll l,ll r)
{
    ll x=lc(pt);
    ll y=rc(pt);
    ll z=(l+r)/2;
    if(l!=r)
    {
        //shifting repetitions of parent to children(range)
        tr[x]=(tr[x]+tr[pt])%M;
        tr[y]=(tr[y]+tr[pt])%M;
        tr[pt]=0;
    }

    //range-out of bounds
    if(input[i][2]<l)
        return;
    if(input[i][1]>r)
        return;
    //range-found(add repetitions to parent)
    if(input[i][1]<=l && r<=input[i][2])
    {
        tr[pt]=(tr[pt]+repetitions)%M;
        return;
    }
    //range-additions
    sumRepetitionsRQRST(x,l,z);
    sumRepetitionsRQRST(y,z+1,r);
}

ll findRRepetitionsRQRST(ll pt,ll l,ll r)//reverse query traversal for finding initial query repetitions
{
	if(l!=r)
    {
        ll x=lc(pt);
        ll y=rc(pt);
        ll z=(l+r)/2;

        //shifting repetitions of parent to children(range)
        tr[x]=(tr[x]+tr[pt])%M;
        tr[y]=(tr[y]+tr[pt])%M;
        tr[pt]=0;

        //range-search
        if(i>z)
            return findRRepetitionsRQRST(y,z+1,r);
        else
            return findRRepetitionsRQRST(x,l,z);
    }
    else
        return tr[pt];
}

int main()
{
    int gg;
    ll x,y,z;
    cin>>gg;
    while(gg--)
    {
        cin>>en>>em;

        ll vl[en+7]={0};

        for(i=0;i<em;i++)
        {
            cin>>input[i][0]>>y>>z;
            input[i][1]=y-1;
            input[i][2]=z-1;
        }

        memset(tr,0,sizeof(tr));
        em--;
        for(i=em;i>=0;i--)
        {
            repetitions=(1+findRRepetitionsRQRST(0,0,em))%M;
            if(input[i][0]!=2)
            {
                vl[input[i][2]+1]=(vl[input[i][2]+1]-repetitions)%M;
                vl[input[i][1]]=(vl[input[i][1]]+repetitions)%M;
            }
            else
                sumRepetitionsRQRST(0,0,em);
        }

        for(i=0;i<en;i++)
        {
            x=vl[i]%M;
            while(x<0)
                x=(x+M)%M;

            cout<<x<<" ";
            vl[i+1]=vl[i]+vl[i+1];
        }
        cout<<endl;
    }
    return 0;
}