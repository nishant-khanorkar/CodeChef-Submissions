#include<stdio.h>

int main()
{
    long long int cnt,a[3],t,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
        for(j=0;j<2;j++)
            for(k=0;k<2-j;k++)
                if(a[k]>a[k+1])
                {
                    cnt=a[k];
                    a[k]=a[k+1];
                    a[k+1]=cnt;
                }
        printf("%lld\n",a[1]);
    }
    return 0;
}