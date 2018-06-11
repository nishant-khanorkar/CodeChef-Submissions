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
		
		int n,q,i,t;
		
		n=ob.nextInt();
		q=ob.nextInt();
		
		int a[]=new int[n];
		for(i=0;i<n;i++)
		     a[i]=ob.nextInt();
		     
		Arrays.sort(a);   
		     
		for(i=0;i<q;i++)
          {
           	t=ob.nextInt();
           	if(a[0]<=t && t<=a[n-1])
           	     System.out.println("Yes");
          	else
          		System.out.println("No");
          }
	}
}