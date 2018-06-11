#include<stdio.h>
#include<stdlib.h>


int i,j,k,a,b,N,K,Kl[100],Kp[100],temp;
int sum[3];

int main()
{
	scanf("%d",&N);
	
	for(j=1;j<=N;j++)
	{
		
		scanf("%d",&K);
		for(i=0;i<K;i++)
			scanf("%d",&Kl[i]);
		for(i=0;i<K;i++)
			scanf("%d",&Kp[i]);
			
			
		for(a=1 ; a<K ; a++)
		{
		    temp=Kp[a];
			for(b=a-1 ; b>=0 ; b--)
		    {
		        if(Kp[b]>temp)
		            Kp[b+1] = Kp[b];
		        else
		            break;
		    }
		    Kp[b+1] = temp;
		}
		
		for(a=1 ; a<K ; a++)
		{
		    temp=Kl[a];
			for(b=a-1 ; b>=0 ; b--)
		    {
		        if(Kl[b]>temp)
		            Kl[b+1] = Kl[b];
		        else
		            break;
		    }
		    Kl[b+1] = temp;
		}	
		
		sum[j]=0;
		for(i=0;i<K;i++)
		{
			sum[j]+=abs(Kp[i]-Kl[i]);
		}
	}
	
	for(j=1;j<=N;j++)
		printf("Case %d: %d\n",j,sum[j]);
}