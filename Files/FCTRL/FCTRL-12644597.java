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

		int t,n,i,j,fac,sum;

		t=ob.nextInt();

		for(i=1;i<=t;i++)
		{
		     n=ob.nextInt();
		     sum=0;
		     fac=5;

		     while(n>=fac)
		     {
		          sum=sum+(int)(n/fac);
		          fac=fac*5;
		     }
		     System.out.println(sum);
		}
	}
}
