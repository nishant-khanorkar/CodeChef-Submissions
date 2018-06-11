#include<stdio.h>
#include<string.h>
int main()
{
    int gg,hh,kk,j,i;
    char dd[105];
    scanf("%d",&gg);
    while(gg--)
    {
        scanf("%s",dd);
        hh=strlen(dd);
        kk=i=0;
        for(j=0;j<hh;)
        {
            if(dd[j]=='U')
            {
                kk++;
                while(dd[j]=='U')
                 j++;
            }
            if(dd[j]=='D')
            {
                i++;
                while(dd[j]=='D')
                 j++;
            }
        }
        if(kk<i)
         printf("%d\n",kk);
        else
         printf("%d\n",i);
    }
    return 0;
}