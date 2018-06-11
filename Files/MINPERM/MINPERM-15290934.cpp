#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int gg,p,q,y;
    cin>>gg;
    while(gg--)
    {
        cin>>y;
        q=y-2;
        for(p=1;p<q;p+=2)
            cout<<p+1<<" "<<p<<" ";
        if(y%2==0)
            cout<<p+1<<" "<<p;
        else
            cout<<p+1<<" "<<p+2<<" "<<p;
        cout<<endl;
    }
    return 0;
}