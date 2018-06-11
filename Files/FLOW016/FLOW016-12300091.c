#include<stdio.h>

int GCD(int a,int b)
{
    int r=a%b;
    if(r==0)
        return b;
    else
        return GCD(b,r);
}
int main()
{
    int n,t,i,k,gcd,lcm;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&k);
        gcd=GCD(k,n);
        lcm=(n*k)/gcd;
        printf("%d %d\n",gcd,lcm);
    }
    return 0;
}