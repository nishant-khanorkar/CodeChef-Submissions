#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gg;
    double a,b,c,d,ans;
    cin>>gg;
    while(gg--)
    {
        cin>>a>>b;
        c=sqrt(b*2);
        d=ceil(c);
        c=floor(c);
        if(c*(c+1)/2 >=b)
            ans=c;
        else
            ans=d;
        if(ans>a)
            cout<<-1<<endl;
        else
            cout<<(long long)ans<<endl;
    }
    return 0;
}
