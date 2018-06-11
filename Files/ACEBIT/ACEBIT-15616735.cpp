#include<bits/stdc++.h>
using namespace std;
#define ll long

int main()
{
    ll gg,hh,ct;
    cin>>gg;
    while(gg--)
    {
        cin>>hh;
        ct=0;
        while(hh>0)
        {
            ct+=hh%2;
            hh/=2;
        }
        cout<<ct<<endl;
    }
    return 0;
}