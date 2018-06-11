import java.util.Arrays;
import java.util.Scanner;

class MEX_FS 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int gg,hh,kk,i,a,b;
        
        gg=sc.nextInt();
        while(gg-- > 0)
        {
            hh=sc.nextInt();
            kk=sc.nextInt();
            
            boolean ax[]=new boolean[200003];
            Arrays.fill(ax,false);
            
            for(i=0;i<hh;i++)
            {
                a=sc.nextInt();
                ax[a]=true;
            }
            
            for(i=0;;i++)
            {
                if(!ax[i])
                {
                    if(kk>0)
                        kk--;
                    else
                    {
                        System.out.println(i);
                        break;
                    }
                }
            }
        }
    }
}