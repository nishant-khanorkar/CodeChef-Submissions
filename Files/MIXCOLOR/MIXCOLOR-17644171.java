import java.util.Arrays;
import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        
        int gg,hh,i,j,ans;
        long k;
        gg=sc.nextInt();
        while(gg-->0)
        {
            hh=sc.nextInt();
            long r[]=new long[hh];
            for(i=0;i<hh;i++)
                r[i]=sc.nextLong();
            Arrays.sort(r);
            ans=0;
            j=0;
            k=-1;
            for(i=0;i<hh;i++)
            {
                if(r[i]==k)
                    j++;
                else
                {
                    ans+=j;
                    j=0;
                    k=r[i];
                }
            }
            ans+=j;
            System.out.println(""+ans);
        }
    }
}