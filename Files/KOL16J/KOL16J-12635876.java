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
		int t,n,i,j,flag,k;
		t=ob.nextInt();
		for(k=1;k<=t;k++)
		{
		     n=ob.nextInt();
		     int a[]=new int[n];
		     int b[]=new int[n];
		     for(i=0;i<n;i++)
		          a[i]=b[i]=ob.nextInt();
		          
		     Arrays.sort(b);
		     
		     flag=0;
		     for(i=0;i<n;i++)
		     {
		          if(b[i]!=a[i])
		          {
		               flag=1;
		               break;
		          }
		     }
		     if(flag==0)
		     {
		          System.out.println("no");
		          continue;
		     }
		     flag=0;
		     for(i=0;i<n;i++)
		     {
		          if(b[i]!=i+1)
		          {
		               flag=1;
		               break;
		          }
		     }
		     if(flag==0)
		          System.out.println("yes");
		     else
		          System.out.println("no");
		}
	}
}