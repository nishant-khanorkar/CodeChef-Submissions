import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,t,n,c,sum,j;
		String s;
		char x;
		int aa[] =new int[28];
		int AA[] =new int[28];
		Scanner ob=new Scanner(System.in);
		t=ob.nextInt();
		while(t-- > 0)
		{
		     s=ob.next();
		     n=s.length();
		     for(i=0;i<27;i++)
		          aa[i]=AA[i]=0;
		          
		     for(i=0;i<n;i++)
		     {
		          x=s.charAt(i);
		          if(x>='a' && x<='z')
		               aa[x-'a']++;
		          else
		               AA[x-'A']++;
		     }
		     sum=0;
		     for(i=0;i<27;i++)
		          sum+=aa[i]/2+AA[i]/2+aa[i]%2+AA[i]%2;
		     System.out.println(sum);
		}
	}
}