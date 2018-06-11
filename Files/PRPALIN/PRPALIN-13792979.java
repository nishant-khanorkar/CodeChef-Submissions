import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int i,t,n,x,y;
		Scanner ob=new Scanner(System.in);
		n=ob.nextInt();
		if(n%2==0)
	          n++;
	     while(true)
	     {
	          x=n;
	          y=0;
	          while(x!=0)
	          {
	               y=y*10+x%10;
	               x/=10;
	          }
	          if(y!=n)
	          {
	               n+=2;
	               continue;
	          }
	          t=0;
	          i=(int)Math.sqrt(n);
	          for(y=2;y<=i;y++)
	               if(n%y==0)
	               {
	                    t=1;
	                    break;
	               }
	          if(t==0)
	          {
	               System.out.println(n);
	               break;
	          }
	          n+=2;
	     }
	}
}