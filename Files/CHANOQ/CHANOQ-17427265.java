import java.util.BitSet;
import java.util.Scanner;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner ob=new Scanner(System.in);
        int i,j,k;
        
        BitSet overlap[]=new BitSet[100005];
        BitSet intersections=new BitSet(100005);
        
        for(i=0;i<100003;i++)
            overlap[i]=new BitSet(100005);
        
        int t=ob.nextInt(),n,l,r,q,m,x;
        
        while(t-->0)
        {
            n=ob.nextInt();
            for(i=1;i<=n;i++)
                overlap[i].clear();
            
            for(i=1;i<=n;i++)
            {
                l=ob.nextInt();
                r=ob.nextInt();
                overlap[l].flip(i);
                overlap[r+1].flip(i);
            }
            
            for(i=2;i<=n;i++)
                overlap[i].xor(overlap[i-1]);
            
            q=ob.nextInt();
            while(q-->0)
            {
                m=ob.nextInt();
                intersections.clear();
                while(m-->0)
                {
                    x=ob.nextInt();
                    intersections.xor(overlap[x]);
                }
                System.out.println(""+intersections.cardinality());
            }
        }
    }
}