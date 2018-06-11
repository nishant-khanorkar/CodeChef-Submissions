import java.util.Arrays;
import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int i,j,k;
        
        boolean prime[]=new boolean[1000001];
        Arrays.fill(prime,true);
        prime[0]=prime[1]=false;
        
        for(i=2;i<=1000;i++)
            if(prime[i])
                for(j=2*i;j<=1000000;j+=i)
                    prime[j]=false;
        
        int primeCnt[]=new int[1000001];
        primeCnt[0]=0;
        for(i=1;i<=1000000;i++)
            primeCnt[i]=primeCnt[i-1]+(prime[i]?1:0);
        
        int t,l,r;
        double ans;
        t=sc.nextInt();
        while(t-->0)
        {
            l=sc.nextInt();
            r=sc.nextInt();
            ans=(double)(primeCnt[r]-primeCnt[l-1])/(r-l+1);
            System.out.printf("%.6f\n",ans);
        }
    }
}