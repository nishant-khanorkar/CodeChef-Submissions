import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,t,n,c,sum,j;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-- > 0)
		{
		     n=ob.nextInt();
		     c=ob.nextInt();
		     sum=0;
		     for(i=0;i<n;i++)
		     {
		          j=ob.nextInt();
		          sum+=j;
		     }
		     if(sum<=c)
		         System.out.println("Yes");
		     else
		         System.out.println("No");
		}
		
	}
}