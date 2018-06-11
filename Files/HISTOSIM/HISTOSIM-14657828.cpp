#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int yy,pp,kk,i,j,d[26],e[26],flag,m,n;
    cin>>yy;
    char ff[1005],gg[1005];
    while(yy--)
    {
        cin>>ff>>gg;
        pp=strlen(ff);

        for(i=0;i<26;i++)
            d[i]=-1,e[i]=-1;
        flag=0;
        for(kk=0,i=0,j=0;kk<pp;kk++)
        {
            m=d[ff[kk]-'a'];
            if(m==-1)
            {
                m=i++;
                d[ff[kk]-'a']=m;
            }
            n=e[gg[kk]-'a'];
            if(n==-1)
            {
                n=j++;
                e[gg[kk]-'a']=n;
            }
            if(m!=n)
            {
                flag=1;
                break;
            }
        }
        flag==1?cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}