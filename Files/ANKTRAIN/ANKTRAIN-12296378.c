#include<stdio.h>


int main()
{
    int n,t,i,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);

        k=n%8;
        switch(k)
        {
            case 1:printf("%dLB\n",n+3);    break;
            case 2:printf("%dMB\n",n+3);    break;
            case 3:printf("%dUB\n",n+3);    break;
            case 4:printf("%dLB\n",n-3);    break;
            case 5:printf("%dMB\n",n-3);    break;
            case 6:printf("%dUB\n",n-3);    break;
            case 7:printf("%dSU\n",n+1);    break;
            case 0:printf("%dSL\n",n-1);    break;
        }
    }
    return 0;
}