#include<stdio.h>

int main()
{
    long long int t,i,p,r,a,b,c;
    float q;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        a=b=c=0;
        scanf("%lld%f%lld",&p,&q,&r);
        if(p>50)
            a=1;
        if(q<0.7)
            b=1;
        if(r>5600)
            c=1;
        if(a&&b&&c)
        {
            printf("10\n");
            continue;
        }
        if(a&&b)
        {
            printf("9\n");
            continue;
        }
        if(b&&c)
        {
            printf("8\n");
            continue;
        }
        if(a&&c)
        {
            printf("7\n");
            continue;
        }
        if(a||b||c)
        {
            printf("6\n");
            continue;
        }
        printf("5\n");
    }
    return 0;
}
