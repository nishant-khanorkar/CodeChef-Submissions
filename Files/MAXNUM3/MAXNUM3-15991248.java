import java.math.BigInteger;
import java.util.Scanner;

class FS_2drk 
{
    
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        
        int h=sc.nextInt(),i,j,k;
        BigInteger b,c,d=BigInteger.valueOf(10),e=BigInteger.valueOf(6),f=BigInteger.valueOf(0);
        String y;
        while(h-->0)
        {
            y=sc.next();
            int p[]=new int[y.length()];
            for(i=0;i<y.length();i++)
                p[i]=y.charAt(i)-'0';
        
            b=BigInteger.ZERO;
            j=-99;
            for(i=0;i<y.length();i++)
            {
                c=BigInteger.ZERO;
                for(k=0;k<y.length();k++)
                {
                    if(i!=k)
                        c=c.multiply(d).add(BigInteger.valueOf(p[k]));
                }
                if(c.compareTo(b)>0 && c.mod(e).compareTo(f)==0)
                {
                    b=c;
                    j=i;
                }
            }

            if(j==-99)
                System.out.println("-1");
            else
            {
                for(i=0;i<y.length();i++)
                    if(i!=j)
                        System.out.print(p[i]);
                System.out.println("");
            }
        }
    }
}