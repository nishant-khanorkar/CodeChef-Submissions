import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
import java.util.TreeSet;

class Megatron 
{
    public static void main(String[] args) 
    {
        Scanner ob=new Scanner(System.in);
        int gg=ob.nextInt(),nn,dd,i,j,k;
        long ans,g,h;
        while(gg-->0)
        {
            nn=ob.nextInt();
            dd=ob.nextInt();
            Optimus x[]=new Optimus[nn],x2;
            ans=0;
            for(k=0;k<nn;k++)
            {
                x[k]=new Optimus(k,ob.nextInt(),g=ob.nextLong(),h=ob.nextLong());
                ans+=g*h;
            }
            Arrays.sort(x);
            TreeSet<Optimus> tr=new TreeSet<>(new Zeno());
            j=0;
            for(i=1;i<=dd;i++)
            {
                while(j<nn && x[j].di<=i)
                    tr.add(x[j++]);
                
                if(!tr.isEmpty())
                {
                    x2=tr.first();
                    tr.remove(x2);
                    ans-=x2.ss;
                    if(--x2.tt>0)
                        tr.add(x2);
                }
            }
            System.out.println(ans);
        }
    }
}

class Optimus implements Comparable<Optimus>
{
    int di,id;
    long tt,ss;
    public Optimus(int id,int di, long tt, long ss) 
    {
        this.id = id;
        this.di = di;
        this.tt = tt;
        this.ss = ss;
    }

    @Override
    public int compareTo(Optimus t) 
    {
        if(di<t.di)
            return -1;
        else if(di>t.di)
            return 1;
        return 0;
    }
}

class Zeno implements Comparator<Optimus>
{
    @Override
    public int compare(Optimus p, Optimus q) 
    {
        if(p.ss<q.ss)
            return 1;
        else if(p.ss>q.ss)
            return -1;
        else
        {
            if(p.id<q.id)
                return -1;
            else if(p.id>q.id)
                return 1;
            return 0;
        }
    }
}