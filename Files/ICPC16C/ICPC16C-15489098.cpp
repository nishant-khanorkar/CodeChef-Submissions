#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a;
        a++;
        do
        {
            b=0;
            while(a>0)
            {
                b+=a%10;
                a/=10;
            }
            a=b;
        }while(a/10!=0);
        cout<<b<<endl;
    }
    return 0;
}