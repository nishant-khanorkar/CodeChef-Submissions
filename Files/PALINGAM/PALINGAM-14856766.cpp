#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gg,hh,i,j,s1,s2;
    char y1[505],y2[505];
    cin>>gg;
    while(gg--)
    {
        cin>>y1>>y2;
        j=strlen(y1);
        int x1[27]={0},x2[27]={0};
        for(i=0;i<j;i++)
        {
            x1[y1[i]-'a']++;
            x2[y2[i]-'a']++;
        }
        j=0;
        s1=0;
        s2=1;
        for(i=0;i<26;i++)
        {
            if(x2[i]==0)
            {
                if(x1[i]>=2)
                    j=1;
                if(x1[i]>0)
                    s1=1;
            }
            else
            {
                if(x1[i]==0)
                    s2=0;
            }
        }
        if(j==1 || (s1==1 && s2==1))
            cout<<'A'<<endl;
        else
            cout<<'B'<<endl;
    }
    return 0;
}