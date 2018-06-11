#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int gg,x,y,i,j,flag;
    ll ms[1005],os[1005],op[1005],c1,c2,c3,k,s;
    char a;
    cin>>gg;
    while(gg--)
    {
        cin>>x>>y;
        c1=0;
        c2=0;
        c3=y;
        int v[y+1]={0};
        for(i=1;i<=x;i++)
            cin>>ms[i];
        for(i=1;i<=y;i++)
            cin>>os[i]>>op[i];
        for(i=1;i<=x;i++)
        {
            flag=0;
            s=ms[i];
            for(j=1;j<=y;j++)
            {
                scanf(" %c ",&a);
                if(a=='1' && op[j]>0  && os[j]>=s)
                {
                    flag=1;
                    s=os[j];
                    k=j;
                }
            }
            if(flag==1)
            {
                c1++;
                op[k]--;
                c2+=os[k];
                if(v[k]!=1)
                {
                    v[k]=1;
                    c3--;
                }
            }
        }
        cout<<c1<<" "<<c2<<" "<<c3<<endl;
    }
    return 0;
}