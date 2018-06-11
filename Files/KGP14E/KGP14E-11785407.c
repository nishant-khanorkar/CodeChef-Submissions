#include<stdio.h>
#include<math.h>
#define ll long long
#define ld long double
#define db double

#define sd(a) scanf("%d",&a)
#define slld(a) scanf("%lld",&a)
#define fast(a,b,c) for(a=b;a<=c;a++)
#define small(c,a,b,K) c= a<b ? a :b  ; if(c<0)c=0 ; if(c>K-1)c=K-1;
#define large(c,a,b,K) c= a>b ? a :b  ; if(c<0)c=0 ; if(c>K-1)c=K-1;
#define small1(c,a,b) c= a<b ? a :b  ; 
#define large1(c,a,b) c= a>b ? a :b  ;
#define subadd(a,b,c) a=c-0.5 , b= c+ 0.5;
#define calR(a,b) a=(b-R)/m +S
#define calC(a,b) a=R+m*(b-S)
#define check(p,K) if(p<0)p=0; if(p>K-1)p=K-1;

int main()
{
	int N,i,K,P,Q,R,S,j,k,p,q,r,s;
	ll count;
	db c1,r1,c2,r2,j1,j2,k1,k2,m;
	sd(N);
	fast(i,1,N)
	{
		sd(K);
		if(K>10000)
		    K=10000;
		sd(P);	sd(Q);
		sd(R);	sd(S);

		count=0;
		m=(db)(P-R)/(Q-S);

		small(p,P,R,K);  
		large(r,P,R,K);   
		small(q,Q,S,K);  
		large(s,Q,S,K);  

		fast(j,p,r)
		{
			
			subadd(j1,j2,j);

			calR(c1,j1);	
			calR(c2,j2);

			db sm,la;
			small1(sm,c1,c2);
			large1(la,c1,c2);
			sm-=2;
			la+=2;
			if(sm<=(db)q)
				sm = q;
			if(la>=(db)s)
				la = s;

			fast(k,(int)sm,(int)la)
			//fast(k,q,s)
			{
				subadd(k1,k2,k);

				calC(r1,k1);
				calC(r2,k2);

				if(k1<=c1 && c1<=k2)
				{
					count++;
					continue;
				}
				if(k1<=c2 && c2<=k2)
				{
					count++;
					continue;
				}
				if(j1<=r1 && r1<=j2)
				{
					count++;
					continue;
				}
					if(j1<=r2 && r2<=j2)
				{
						count++;
					continue;
				}
			}
		}
		printf("Case %d: %lld\n",i,count);
	}
	return 0;
}