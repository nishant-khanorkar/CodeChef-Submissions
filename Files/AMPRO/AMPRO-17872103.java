import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String p[]=s.split(" ");
        for(int i=0;i<p.length-1;i++)
            System.out.print(p[i].toUpperCase().charAt(0)+".");
        char pp[]=p[p.length-1].toCharArray();
        pp[0]=((Character)pp[0]).toString().toUpperCase().charAt(0);
        String x=new String(pp,0,pp.length);
        System.out.print(x);
    }
}