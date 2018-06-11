import java.util.Scanner;

class CHEFCOUN_FS 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        long gg,hh,kk,i,a,b,c,x,y;
        boolean flag;
        b=(long)Math.pow(2,32);
        c=(long)Math.pow(10,5);
        gg=sc.nextInt();
        while(gg-- > 0)
        {
            hh=sc.nextLong();
            kk=-1+b/hh;
            a=c;
            flag=true;
            while(true)
            {
                x=(kk*hh+a)%b;
                y=(kk*hh-kk+2*a)%b;
                if(x>y)
                    break;
                a-=c/5;
                if(flag)
                {
                    flag=false;
                    kk++;
                }
            }
            for(i=1;i<hh;i++)
                System.out.print(kk+" ");
            System.out.println(a+" ");
        }
    }
}