import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        long n;
        
        while(t-->0)
        {
            n=sc.nextLong();
            n/=7;
            n=(n*(n+1))/2;
            n*=7;
            System.out.println(""+n);
        }
    }
}