import java.util.Arrays;
import java.util.Scanner;
 
class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner ob=new Scanner(System.in);
        int x,i,j,z=ob.nextInt();
        String xy=ob.nextLine();
        char y;
        while(z-- > 0)
        {
            xy=ob.nextLine();
            String[] xx=xy.split(" ");
            long yy[]=new long[500];
            for(i=0;i<xx.length;i++)
                yy[i]=Long.parseLong(xx[i]);
            Arrays.sort(yy,0,xx.length);
            long kk=yy[xx.length-1];
            if(kk==xx.length-1 && xx.length!=1)
                kk=yy[xx.length-2];
            System.out.println(kk);
        }
    }
}