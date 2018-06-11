#include<stdio.h>
#include<stdlib.h>
 
long long int cmpfunc (const void * a, const void * b)
{
   return ( *(long long int*)a - *(long long int*)b );
}
int main()
{
    long long int cnt,n,arr[100005],t,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++)
            scanf("%lld",&arr[j]);
        
        qsort(arr,n,sizeof(long long int),cmpfunc );
        
        printf("%lld\n",arr[0]+arr[1]);
    }
    return 0;
}