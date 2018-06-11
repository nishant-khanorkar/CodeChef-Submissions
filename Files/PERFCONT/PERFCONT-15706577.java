import java.util.Scanner;

class PERFCONT_FS {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long gg,hh,kk,i,a,b;
        
        gg=sc.nextLong();
        while(gg-- > 0)
        {
            hh=sc.nextLong();
            kk=sc.nextLong();
            a=kk/2;
            b=kk/10;
            
            long x=0,y=0;
            for(i=0;i<hh;i++)
            {
                kk=sc.nextLong();
                if(kk>=a)
                    x++;
                if(kk<=b)
                    y++;
            }
            if(x==1 && y==2)
                System.out.println("yes");
            else
                System.out.println("no");
        }
    }   
}