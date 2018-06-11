import java.util.Arrays;
import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        
        int gg,hh,i,j;
        gg=sc.nextInt();
        long r[]=new long[100005],sum,ans[]=new long[100005];
        while(gg-->0)
        {
            hh=sc.nextInt();
            for(i=1;i<=hh;i++)
                r[i]=sc.nextLong();
            
            Arrays.fill(ans,0);
            for(i=1;i<=hh;i++)
            {
                sum=0;
                for(j=i+1;j<=hh;j++)
                {
                    ans[j]++;
                    sum+=r[j];
                    if(sum>r[i])
                        break;
                }
                sum=0;
                for(j=i-1;j>=1;j--)
                {
                    ans[j]++;
                    sum+=r[j];
                    if(sum>r[i])
                        break;
                }
            }
            for(i=1;i<=hh;i++)
                System.out.print(ans[i]+" ");
            System.out.println("");
        }
    }
}