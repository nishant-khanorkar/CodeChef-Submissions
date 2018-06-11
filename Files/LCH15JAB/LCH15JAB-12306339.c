#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a ,const void *b)
{
    return(*(int*)a - *(int*)b);
}

int main()
{
    int t,i,j,sum;
    char a[55];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        int b[26]={0};
        
        for(j=0;a[j]!='\0';j++)
            b[a[j]-'a']++;
            
        qsort(b,26,sizeof(int),cmpfunc);
        
        sum=0;
        for(j=0;j<25;j++)
            sum+=b[j];
            
        if(b[25]==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}