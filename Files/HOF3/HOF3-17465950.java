import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        long x1,y1,x2,y2,r1,r2;
        double d,d1;
        while(t-->0)
        {
            x1=sc.nextLong();
            y1=sc.nextLong();
            r1=sc.nextLong();
            x2=sc.nextLong();
            y2=sc.nextLong();
            r2=sc.nextLong();
            
            d=Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
            d1=r1+r2;
            if(d1==d)
                System.out.println("tangential");
            else if(d1>d)
                System.out.println("overlapping");
            else
                System.out.println("not overlapping");
        }
    }
}