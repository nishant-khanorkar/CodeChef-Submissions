#include<bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    int gg;
    char sx[105];
    cin>>gg;
    while(gg--)
    {
        cin>>sx;
        int i,l=strlen(sx),ct[28]={0},flag=0;
        for(i=0;i<l;i++)
            ct[sx[i]-'a']++;
        for(i=0;i<26;i++)
            if(ct[i]>=2)
            {
                flag=1;
                break;
            }
        if(flag==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}