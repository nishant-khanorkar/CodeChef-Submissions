#include<stdio.h>

#define ll long long
int main()
{
    ll y,i,n,j,d;
    char day[7][10]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        d=0;
        scanf("%lld",&y);
        for(j=1900;j<y;j++)
            if(((j%4==0) && (j%100!=0))||(j%400==0))
                d+=366;
            else
                d+=365;
        printf("%s\n",day[d%7]);
        
    }
    return 0;
}