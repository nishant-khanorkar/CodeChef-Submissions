import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-- > 0)
		{
		     n=ob.nextInt();
		     if(n%2==0)
		          System.out.println("ALICE");
		     else
		          System.out.println("BOB");
		}
	}
}