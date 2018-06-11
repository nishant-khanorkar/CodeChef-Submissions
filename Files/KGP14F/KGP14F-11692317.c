#include<stdio.h>
#include<stdlib.h>

int N,K,H,G,C,hostx[251],guestx[251],hosty[251],guesty[251],team[4];

int i,j,k,p,q,r,s,d,a,b,u,v,w,x,min,max,maxk,maxj,visithost[251],visitguest[251];


int main()
{
	scanf("%d",&N);
	
	for(i=1;i<=N;i++)
	{
		scanf("%d%d%d%d",&H,&G,&K,&C);
		for(j=1;j<=H;j++)
		{
			scanf("%d%d",&hostx[j],&hosty[j]);
			visithost[j]=0;
		}
		for(j=1;j<=G;j++)
		{
			scanf("%d%d",&guestx[j],&guesty[j]);
			visitguest[j]=0;
		}

		team[i]=0;
		
		for(j=1;j<=H;j++)
		{
			p=hostx[j] , q=hosty[j];
			max=-1;
			for(k=1;k<=G;k++)
			{
				if(visitguest[k]!=0)
					continue;
				r=guestx[k] , s=guesty[k];
				
				d=(abs(p-r)+abs(q-s)+abs(K-r)+abs(K-s));
				if(max<d && d<=C)
					max=d , maxk=k;	
			}
			if(max<=C && max!=-1)
				team[i]++ , visitguest[maxk]=j , visithost[j]=maxk;
		}
			
		for(k=1;k<=G;k++)
		{
			if(visitguest[k]!=0)
				continue;
			r=guestx[k] , s=guesty[k];

			for(j=1;j<=H;j++)
			{
				if(visithost[j]==0)
					continue;
				p=hostx[j] , q=hosty[j];	

				d=(abs(p-r)+abs(q-s)+abs(K-r)+abs(K-s));

				if(d<=C)
				{
					for(a=1;a<=H;a++)
					{
						if(visithost[a]!=0)
							continue;
						u=hostx[a] , v=hosty[a];
				
						b=visithost[j];	

						w=guestx[b] , x=guesty[b];

						d=(abs(u-w)+abs(v-x)+abs(K-w)+abs(K-x));

						if(d<=C)
						{
							team[i]++ , visitguest[k]=j , visithost[j]=k;
								    visitguest[b]=a , visithost[a]=b;
						}
					}
				}
			}
		}		

	}
	for(i=1;i<=N;i++)
		printf("Case %d: %d\n",i,team[i]);
}