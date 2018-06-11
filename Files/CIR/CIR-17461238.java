import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        
        int t=sc.nextInt();
        int x1,y1,x2,y2,r1,r2;
        double d;
        while(t-->0)
        {
            x1=sc.nextInt();
            y1=sc.nextInt();
            r1=sc.nextInt();
            x2=sc.nextInt();
            y2=sc.nextInt();
            r2=sc.nextInt();
            
            if(x1==x2 && y1==y2 && r1==r2)
            {
                System.out.println("C2~C1");
                continue;
            }
            d=Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
            if(r1>r2)
            {
                if(d+r2<=1.0*r1)
                {
                    System.out.println("C1CC2");
                    continue;
                }
            }
            else
            {
                if(d+r1<=1.0*r2)
                {
                    System.out.println("C2CC1");
                    continue;
                }
            }
            System.out.println("NOT SATISFIED");
        }
    }
}