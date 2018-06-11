#include<stdio.h>

int main()
{
    int t,i,j,k,sum,n,m,l;
    char a[10][10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        for(j=0;j<n;j++)
            scanf("%s",a[j]);
        sum=0;
        for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
                for(l=0;l<m;l++)
                    if(a[j][l]=='1' && a[k][l]=='1')
                        sum++;
        printf("%d\n",sum);
    }
    return 0;
}