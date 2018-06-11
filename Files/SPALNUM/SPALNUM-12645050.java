import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner ob=new Scanner(System.in);
		
		int a1,b,i,j,t,rev,n,k;
		
		int a[]=new int[100001];
		
		for(i=0;i<100001;i++)
     	{
     	     n=i;
     	     rev=0;
     	     while(n>0)
     	     {
     	          rev=10*rev+n%10;
     	          n=n/10;
     	     }
     	     if(rev==i)
     	          a[i]=i;
     	     else
     	          a[i]=0;
     	}
		
		t=ob.nextInt();
		
		for(j=0;j<t;j++)
		{
     	     a1=ob.nextInt();
     		b=ob.nextInt();
     		k=0;
     		for(i=a1;i<=b;i++)
     		     k=k+a[i];
     		System.out.println(k);
		}
	}
}