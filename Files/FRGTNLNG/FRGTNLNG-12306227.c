#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,k,l,i,j,p,flag;
    char fg[100][6],a[2500][6];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&k);
        for(j=0;j<n;j++)
            scanf("%s",fg[j]);
        p=0;
        for(j=0;j<k;j++)
        {
            scanf("%d",&l);
            l+=p;
            for(;p<l;p++)
                scanf("%s",a[p]);
        }
        for(j=0;j<n;j++)
        {
            flag=0;
            for(l=0;l<p;l++)
            {
                if(!strcmp(fg[j],a[l]))
                {
                    flag=1;
                    printf("YES ");
                    break;
                }
            }
            if(flag==0)
                printf("NO ");
        }
       printf("\n");
    }
    return 0;
}