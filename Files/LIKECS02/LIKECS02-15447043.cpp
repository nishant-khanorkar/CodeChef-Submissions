#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int gg,i,j,k,flag,ss,xx;
    double yy,av;
    cin>>gg;
    while(gg--)
    {
        cin>>k;
        if(k%2==0)
        {
            ss=k/2;
            i=k-ss+1;
            j=k+ss;
        }
        else
        {
            ss=(k-1)/2;
            i=k-ss;
            j=k+ss;
        }
        for(xx=i;xx<=j;xx++)
            cout<<xx<<" ";
        cout<<endl;
    }
    return 0;
}