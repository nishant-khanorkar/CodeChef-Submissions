import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,t,n,x;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-- > 0)
		{
		     n=ob.nextInt();
		     x=1;
		     while(x<n)x=x*2;
		     System.out.println(x/2);
		}
	}
}