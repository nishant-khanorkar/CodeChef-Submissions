#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    char xx[105],y;
    int i,j,k;
    cin>>xx;
    j=strlen(xx);
    for(i=0;i<j;i++)
    {
        if(xx[i]>='A' && xx[i]<='Z')
            y=xx[i]-'A'+'a';
        else
            y=xx[i]-'a'+'A';
        cout<<y;
    }
    return 0;
}