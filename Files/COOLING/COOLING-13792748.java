import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,j,t,n,ans;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-- > 0)
		{
		     n=ob.nextInt();
		     int we[]=new int[n];
		     int li[]=new int[n];
		     for(i=0;i<n;i++)
		          we[i]=ob.nextInt();
		     for(i=0;i<n;i++)
		          li[i]=ob.nextInt();
		     Arrays.sort(we);
		     Arrays.sort(li);
		     ans=0;
		     for(i=0,j=0;i<n && j<n;)
		     {
		          if(we[i]<=li[j])
		          {
		               i++;
		               ans++;
		          }
		          j++;
		     }
		     System.out.println(ans);
		}
	}
}