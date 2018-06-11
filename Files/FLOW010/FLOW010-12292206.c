#include<stdio.h>

int main()
{
    long long int t,i;
    char a;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %c ",&a);
        if(a=='B'||a=='b')
            printf("BattleShip\n");
        else if(a=='C'||a=='c')
            printf("Cruiser\n");
        else if(a=='D'||a=='d')
            printf("Destroyer\n");
        else if(a=='F'||a=='f')
            printf("Frigate\n");
    }
    return 0;
}