#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int gg,p,q,x,y;
    char ac[100005];
    cin>>gg;
    while(gg--)
    {
        cin>>ac;
        q=strlen(ac);
        int frq[10]={0};
        for(p=0;p<q;p++)
            frq[ac[p]-'0']++;
        for(p='A';p<='Z';p++)
        {
            x=p/10;
            y=p%10;
            frq[x]--;
            frq[y]--;
            if(frq[x]>=0 && frq[y]>=0)
                cout<<(char)p;
            frq[x]++;
            frq[y]++;
        }
        cout<<endl;
    }
    return 0;
}