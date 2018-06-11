#include<stdio.h>
#include<stdlib.h>
#define ll long long

ll cmpfunc(const void *a,const void *b)
{
    return(*(ll *)a-*(ll *)b);
}

int main()
{
    ll t,n[1000000],i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
        scanf("%lld",&n[i]);
    
    qsort(n,t,sizeof(ll),cmpfunc);
    
    for(i=0;i<t;i++)
        printf("%lld\n",n[i]);    
        
    return 0;
}