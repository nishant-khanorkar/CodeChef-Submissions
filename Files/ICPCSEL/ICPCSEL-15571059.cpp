#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000

typedef struct hmm
{
    char s[23];
    int rnk;
    int level;
}hmm;

int cmp1(const void* a,const void* b)
{
     hmm *k1=(hmm *)a;
     hmm *k2=(hmm *)b;

     if((k1->level > k2->level)||((k1->level == k2->level)&&(k1->rnk > k2->rnk)))
          return 1;
     else
          return -1;
}

int cmp2(const void* a,const void* b)
{
     hmm *k1=(hmm *)a;
     hmm *k2=(hmm *)b;

     if(k1->rnk > k2->rnk)
          return 1;
     else
          return -1;
}

int main()
{
    ll gg,h,k,i,j,m,a,p,q,b,c,yu,z;

    char x[23],y[23];
    cin>>gg;
    while(gg--)
    {
        cin>>a>>b>>c;

        hmm dtt[a];

        int top=0,cnt[a+1]={0},xp=1;

        map<ll,int> gy;

        for(i=0,j=1;i<a;i++)
        {
            cin>>x>>y;

            yu=5381;
            q=0;
            p=253;
            while(z=y[q++])
                yu+=yu*29+z*(p++);

            if(gy.count(yu)!=1)
                gy[yu]=xp++;
            p=gy[yu];

            if(cnt[p]<c)
            {
                strcpy(dtt[top].s,x);
                dtt[top].level=cnt[p]++;
                dtt[top].rnk=i;
                top++;
            }
        }

        if(top<b)
            cout<<"Impossible"<<endl;
        else
        {
            qsort(dtt,top,sizeof(hmm),cmp1);
            qsort(dtt,b,sizeof(hmm),cmp2);
            for(i=0;i<b;i++)
                cout<<dtt[i].s<<endl;
        }
        cout<<endl;
    }
    return 0;
}