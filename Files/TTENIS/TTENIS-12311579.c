#include<stdio.h>
#define ll long long

int main()
{
    ll t,i,a,b,j;
    char n[102];
    scanf("%lld",&t);
    for(j=0;j<t;j++)
    {
        scanf("%s",n);
        a=b=0;
        for(i=0;n[i]!='\0';i++)
            if(n[i]=='1')
                a++;
            else
                b++;
        if(a>b)
            printf("WIN\n");
        else
            printf("LOSE\n");
        
    }
    return 0;
}