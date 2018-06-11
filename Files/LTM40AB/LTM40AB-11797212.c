#include<stdio.h>
    #define ll long long
    #define sd(a) scanf("%d",&a)
    #define slld(a) scanf("%lld",&a)
	#define plld(a) printf("%lld\n",a)
	#define sum(v,k) v=(k)*(k+1)/2;

    int main()
    {
		int T;
		ll a,b,c,d,count,k;
    	sd(T);
    	if(T>20)
    	    T=20;
		while(T--)
		{
			slld(a) , slld(b) , slld(c) , slld(d);
			count=0;

			if(a<d && b>=a && d>=c)
			{
				if(c>b)
				{
					count=(d-c+1)*(b-a+1);
					plld(count);
					continue;
				}			
			
				if(c>a)
				{
					count=(d-c+1)*(c-a);
					
					k=count;
					sum(count,d-c);
					count+=k;
		
					if(d>b+1)
					{
						sum(k,d-b-1);
						count-=k;
					}
					plld(count);
					continue;
				}
				if(c<=a)
				{
				
					sum(count,d-a);
		
					if(d>b+1)
					{
						sum(k,d-b-1);
						count-=k;
					}
					plld(count);
					continue;
				}
			}
		plld(count);	
		}
		return 0;
    }