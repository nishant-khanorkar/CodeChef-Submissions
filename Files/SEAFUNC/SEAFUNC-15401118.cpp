#include<bits/stdc++.h>
using namespace std;

struct ABC
{
    int ni;
    int c;
    int l;
    int r;
};

struct XY
{
    int aa;
    int bb;
};
XY ctt[11];

ABC dh[10000];

int cmp(const void* a,const void* b)
{
     ABC *k1=(ABC *)a;
     ABC *k2=(ABC *)b;

     if(k1->ni < k2->ni)
          return 1;
     else
          return -1;
}

int cmp2(const void* a,const void* b)
{
     XY *k1=(XY *)a;
     XY *k2=(XY *)b;

     if(k1->aa < k2->aa)
          return 1;
     else
          return -1;
}

int main()
{
    int gg,i,hh,j,upj;
    char spr[100][100];

    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        upj=0;

        for(i=0;i<hh;i++)
            ctt[i].aa=0,ctt[i].bb=i+1;

        for(i=0;i<hh;i++)
            for(j=0;j<hh;j++)
            {
                scanf(" %c",&spr[j][i]);
                if(spr[j][i]=='1')
                    upj++,ctt[j].aa++;
            }
        qsort(ctt,hh,sizeof(XY),cmp2);

        int top=0,dy=0,vv[hh+1]={0};
        ABC answers[10000];
        for(i=0;i<hh;i++)
        {
            if(dy+hh-ctt[i].aa<=100)
            {
                dy+=hh-ctt[i].aa;
                vv[ctt[i].bb]=1;
                answers[top].c=ctt[i].bb;
                answers[top].l=1;
                answers[top].r=hh;
                top++;
            }
        }

        int xtr=0,pb=0;

        for(i=0;i<hh;i++)
        {
            for(j=0;j<hh;j++)
            {
                if(spr[i][j]=='1')
                {
                    dh[xtr].c=i+1;
                    dh[xtr].l=j+1;
                    while(j<hh && spr[i][j]=='1')
                        j++;
                    dh[xtr].r=j;
                    dh[xtr].ni=dh[xtr].r-dh[xtr].l+1;
                    xtr++;
                }
            }
        }
        //qsort(dh,xtr,sizeof(ABC),cmp);

        for(i=0;i<xtr;i++)
        {
            if(vv[dh[i].c]==0)
            {
                answers[top]=dh[i];
                top++;
            }
        }

        /*for(i=xtr-1;i>=0;i--)
        {
            if(pb+dh[i].ni<=100)
            {
                xtr--;
                pb+=dh[i].ni;
            }
            else
                break;
        }*/

        /*cout<<xtr<<endl;
        for(i=0;i<xtr;i++)
            cout<<"0 1 0 1 0 1 "<<dh[i].c<<" "<<dh[i].l<<" "<<dh[i].r<<endl;*/
        cout<<top<<endl;
        for(i=0;i<top;i++)
            cout<<"0 1 0 1 0 1 "<<answers[i].c<<" "<<answers[i].l<<" "<<answers[i].r<<endl;
    }
    return 0;
}