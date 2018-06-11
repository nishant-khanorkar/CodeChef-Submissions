#include<stdio.h>
#include<math.h>
#define ll long long

int main()
{
    	int gg,i,j;
    	char dx[27],ip[100005];
    	for(i='a',j='z';i<='z';i++,j--)
    	     dx[i-'a']=j;
    	scanf("%d",&gg);
    	while(gg--)
    	{
    	     scanf("%s",ip);
    	     j=strlen(ip);
    	     for(i=0;i<j;i++)
    	          printf("%c",dx[ip[i]-'a']);
    	     printf("\n");
    	}
    	return 0;
}
