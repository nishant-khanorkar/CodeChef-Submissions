import java.util.Scanner;

class Megatron 
{
    static int gcd(int a, int b) 
    {
        while (b != 0) {
            int t = a;
            a = b;
            b = t % b;
        }
        return a;
    }
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int c1=0,c2=0;
        String s=sc.nextLine();
        String p[]=s.split(" ");
        for(String o:p)
        {
            if("love".equals(o) || "babe".equals(o) || "sweety".equals(o) || "life".equals(o))
                c1++;
            c2++;
        }
        int c=gcd(c1,c2);
        c1/=c;
        c2/=c;
        System.out.println(c1+"/"+c2);
    }
}