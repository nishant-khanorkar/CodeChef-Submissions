#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000000


int main()
{
    ll gg,h,k,i,j,m,a,p,q,b;

        int nPr[1000001]={0};
        ll sum[1000001]={0};
        nPr[0]=nPr[1]=1;
        for (p=2; p<1000; p++)
            if (!nPr[p])
            {
                m=p;
                i=0;
                while(m>0)
                {
                    i+=m%10;
                    m/=10;
                }
                for (q=p; q<=1000000; q+=p)
                    nPr[q]=1,sum[q]+=i;
            }

        for(p=1000;p<=1000000;p++)
        {
            if(!nPr[p])
            {
                m=p;
                i=0;
                while(m>0)
                {
                    i+=m%10;
                    m/=10;
                }
                for(q=p;q<=1000000;q+=p)
                    sum[q]+=i;
            }
        }

        for(p=1;p<=1000000;p++)
            sum[p]+=sum[p-1];

        cin>>gg;
        while(gg--)
        {
             cin>>a>>b;
             cout<<(sum[b]-sum[a-1])%1000000007<<endl;
        }
        return 0;
}