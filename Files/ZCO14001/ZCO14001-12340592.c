#include<stdio.h>

#define ll long long
#define slld(a)  scanf("%lld",&a)
#define slld1(a,b)  scanf("%lld%lld",&a,&b)
#define plld(a)  printf("%lld ",a)
#define fast(a,b,c) for(a=b;a<c;a++)

int main()
{
    ll N,H,ar[100005],i,c,k,p;

    slld1(N,H);
    fast(i,0,N)
        slld(ar[i]);

    k=p=0;
    while(1)
    {
        slld(c);
        if(c==0)
            break;
        switch(c)
        {
            case 1:if(k!=0)
                        k--;
                    break;
            case 2:if(k!= N-1)
                        k++;
                    break;
            case 3:if(p==0 && ar[k]!=0)
                    {
                        ar[k]--;
                        p=1;
                    }
                    break;
            case 4:if(p==1 && ar[k]!=H)
                    {
                        ar[k]++;
                        p=0;
                    }
                    break;
        }
    }

    fast(i,0,N)
        plld(ar[i]);

    return 0;
}
