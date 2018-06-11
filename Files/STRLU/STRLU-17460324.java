import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;
import java.util.TreeSet;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int i,j;
        
        int t=sc.nextInt();
        long k,sum,val,previous,remaining,n,bits;
        while(t-->0)
        {
            k=sc.nextLong();
            sum=0;
            val=1;
            for(i=1;sum<k;i++)
            {
                val*=2;
                sum+=val;
            }
            
            bits=i-1;
            sum-=val;
            n=0;
            j=1;
            remaining=k-sum-1;
            while(bits>0)
            {
                n+=j*(remaining%2==0?5:8);
                j*=10;
                remaining/=2;
                bits--;
            }
            System.out.println(""+n);
        }
    }
}