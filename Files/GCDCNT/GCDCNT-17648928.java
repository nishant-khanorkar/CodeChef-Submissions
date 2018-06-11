import java.util.BitSet;
import java.util.Scanner;

class Megatron 
{
    //Prime Factorization Credits:geeksforgeeks
    static final int MAXN = 100001;
    static int spf[] = new int[MAXN];
    static void sieve()
    {
        spf[1] = 1;
        for (int i=2; i<MAXN; i++)
            spf[i] = i;
        for (int i=4; i<MAXN; i+=2)
            spf[i] = 2;
        for (int i=3; i*i<MAXN; i++)
        {
            if (spf[i] == i)
            {
                for (int j=i*i; j<MAXN; j+=i)
                    if (spf[j]==j)
                        spf[j]=i;
            }
        }
    }
     
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        
        int gg,hh,i,j,x,xx,yy,ll,rr,g;
        gg=sc.nextInt();
      
        int r[]=new int[gg+1];
        BitSet bs[]=new BitSet[100001];
        for(i=1;i<=100000;i++)
            bs[i]=new BitSet(gg+1);
        sieve();
        for(i=1;i<=gg;i++)
        {
            r[i]=sc.nextInt();
            x=r[i];
            while(x!=1)
            {
                bs[spf[x]].set(i);
                x=x/spf[x];
            }
        }
        hh=sc.nextInt();
        while(hh-->0)
        {
            if(sc.nextInt()==1)
            {
                xx=sc.nextInt();
                yy=sc.nextInt();
                x=r[xx];
                while(x!=1)
                {
                    bs[spf[x]].clear(xx);
                    x=x/spf[x];
                }
                r[xx]=yy;
                x=r[xx];
                while(x!=1)
                {
                    bs[spf[x]].set(xx);
                    x=x/spf[x];
                }
            }
            else
            {
                ll=sc.nextInt();
                rr=sc.nextInt();
                g=sc.nextInt();
                
                BitSet bn=new BitSet(gg+1);
                x=g;
                while(x!=1)
                {
                    bn.or(bs[spf[x]]);
                    x=x/spf[x];
                }
                bn=bn.get(ll,rr+1);
                System.out.println(""+(rr-ll+1-bn.cardinality()));
            }
        }
    }
}