#include<stdio.h>

int main()
{
    int i,n,a,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
            cnt++;
    }
    if(cnt>n-cnt)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");
    return 0;
}