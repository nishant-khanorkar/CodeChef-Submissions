#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,k,l,i,j,p,flag;
    char a[1001];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %s",&n,a);
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[j]=='Y')
            {
                printf("NOT INDIAN\n");
                flag=1;
                break;
            }
            else if(a[j]=='I')
            {
                printf("INDIAN\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("NOT SURE\n");
    }
    return 0;
}