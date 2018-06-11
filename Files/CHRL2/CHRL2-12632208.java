/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
	
		String str=b.readLine();
		
		int l=str.length();
		int i,c,h,e,f;
		char ch;
		c=h=e=f=0;
		
		for(i=l-1;i>=0;i--)
	     {
	          ch=str.charAt(i);
	          if(ch=='F')
	          {
	               f++; continue;
	          }
	          if(ch=='E' && f>e)
	          {
	               e++; continue;
	          }
	          if(ch=='H' && e>h)
	          {
	               h++; continue;
	          }
	          if(ch=='C' && h>c)
	          {
	               c++; continue;
	          }
	          
	     }
		System.out.println(c);
	}
}