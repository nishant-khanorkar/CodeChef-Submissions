/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner ob=new Scanner(System.in);
		
		int i,j,t,n,k,z;
		
		t=ob.nextInt();
		
		for(i=0;i<t;i++)
		{
		     n=ob.nextInt();
		     z=0;
		     for(j=0;j<n;j++)
		     {
		          k=ob.nextInt();
		          if(k==1)
		               z++;
		     }
		     
		     if(z%2==1)
		          System.out.println(z);
		     else
		          System.out.println(n-z);
		}
	}
}