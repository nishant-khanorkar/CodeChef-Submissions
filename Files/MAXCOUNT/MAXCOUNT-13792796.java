import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,j,t,n,val,cnt;
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		int count[]=new int[10005];
		while(t-- > 0)
		{
		     n=ob.nextInt();
		     val=0;
		     cnt=0;
               for(i=0;i<10005;i++)
                    count[i]=0;
		     for(i=0;i<n;i++)
		     {
		          j=ob.nextInt();
		          count[j]++;
		          if(count[j]>cnt || (count[j]==cnt && j<val))
		          {
		               cnt=count[j];
		               val=j;
		               continue;
		          }
		     }
		     
		     System.out.println(val+" "+cnt);
		}
	}
}