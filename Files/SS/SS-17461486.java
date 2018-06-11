import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        double nn,ans;
        while(t-->0)
        {
            nn=sc.nextDouble();
            ans=((nn+1)*(nn+2))/(4*nn+2);
            System.out.println(""+(long)Math.floor(ans));
        }
    }
}