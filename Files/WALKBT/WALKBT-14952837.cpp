#include<bits/stdc++.h>
using namespace std;

int u,bs[100005],xs,ans[100005],tp,r,a,b;

void add()
{
     for(r=0;r<=tp;r++)
     {
          a=ans[r]+1;
          ans[r]=a%10;
          b=a/10;
          if(b==0)
          break;
     }
     if(b==1)
          ans[++tp]=1;
}

struct Tree
{
    struct Tree *node[2];
};

struct Tree *root;

struct Tree *newNode()
{
    struct Tree *pt=NULL;
    pt=(struct Tree *)malloc(sizeof(struct Tree));

    pt->node[0]=NULL;
    pt->node[1]=NULL;
    
    add();
    
    return pt;
}

void putArray()
{
    struct Tree *pp=root;
    for(u=xs-1;u>=0;u--)
    {
        if(pp->node[bs[u]]==NULL)
            pp->node[bs[u]]=newNode();
        pp=pp->node[bs[u]];
    }
}

int main()
{
    int gg,ys,zz;
    char gs;
    cin>>gg;
    while(gg--)
    {
        cin>>xs>>ys;
        
        memset(bs,0,xs*sizeof(int));
        ans[0]=0;
        tp=0;
        
        root=newNode();
        
        while(ys--)
        {
            cin>>gs;
            if(gs=='!')
            {
                cin>>zz;
                while(zz<xs)
                {
                    bs[zz]^=1;
                    if(bs[zz])
                        break;
                    zz++;
                }
                putArray();
            }
            else
            {
                for(zz=tp;zz>=0;zz--)
                    cout<<ans[zz];
               cout<<endl;
            }
        }
    }
    return 0;
}