import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner ob=new Scanner(System.in);
        int gg=ob.nextInt(),i,j,p,q;
        char x,y;
        String xx;
        while(gg-->0)
        {
            xx=ob.next();
            j=xx.length();
            p=0;
            q=0;
            x='=';
            for(i=0;i<j;i++)
            {
                y=xx.charAt(i);
                if(y=='=')
                    continue;
                if(y==x)
                    p++;
                else
                {
                    if(p>q)
                        q=p;
                    p=1;
                    x=y;
                }
            }
            if(p>q)
                q=p;
            System.out.println(q+1);
        }
    }
}