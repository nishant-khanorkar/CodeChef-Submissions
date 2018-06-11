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
            x=xx.length-1;
            for(i=0;i<x;i++)
            {
                y=xx[i].charAt(0);
                if(y>='a' && y<='z')
                    y=(char) (y-'a'+'A');
                System.out.print(y+". ");
            }
            j=xx[x].length();
            
            y=xx[x].charAt(0);
            if(y>='a' && y<='z')
                y=(char) (y-'a'+'A');
            System.out.print(y);
            
            for(i=1;i<j;i++)
            {
                y=xx[x].charAt(i);
                if(y>='A' && y<='Z')
                    y=(char) (y+'a'-'A');
                System.out.print(y);
            }
            System.out.println();
        }
    }
}