import java.io.DataInputStream;
import java.io.IOException;
import java.util.Iterator;
import java.util.LinkedList;
import javafx.util.Pair;
 
class Megatron
{
    
    static class FastIO
    {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public FastIO()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public int nextInt() throws IOException
        {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) >= '0' && c <= '9');
 
            if (neg)
                return -ret;
            return ret;
        }
 
        public long nextLong() throws IOException
        {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            }
            while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
 
        private byte read() throws IOException
        {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
 
        public void close() throws IOException
        {
            if (din == null)
                return;
            din.close();
        }
    }
    
    static long mNo[]=new long[100001];
    static int level[]=new int[100001],parent[]=new int[100001];
    static boolean visited[];
    static LinkedList<Zeno> aL[]=new LinkedList[100001];
    static Zeno p;
    
    
    static void DFS(int x)
    {
        visited[x]=true;
        Iterator<Zeno> itr=aL[x].iterator();
        while(itr.hasNext())
        {
            p=itr.next();
            if(!visited[p.a])
            {
                level[p.a]=level[x]+1;
                parent[p.a]=x;
                mNo[p.a]=p.b;
                DFS(p.a);
            }
        }
    }
    
    public static void main(String args[]) throws IOException
    {
        FastIO ob=new FastIO();
        int at=ob.nextInt(),an,am,au,av,i;
        long ac,ans;
        
        Zeno z1[]=new Zeno[100000],z2[]=new Zeno[100000];
        
        for(i=0;i<100000;i++)
        {
            z1[i]=new Zeno();
            z2[i]=new Zeno();
        }
        while(at-->0)
        {
            an=ob.nextInt();
            
            for(i=0;i<=an;i++)
                aL[i]=new LinkedList<>();
            
            for(i=1;i<an;i++)
            {
                z1[i].a=ob.nextInt();
                z2[i].a=ob.nextInt();
                z1[i].b=z2[i].b=ob.nextLong();
                aL[z1[i].a].add(z2[i]);
                aL[z2[i].a].add(z1[i]);
            }
            
            level[2*an/3]=1;
            parent[2*an/3]=1;
            mNo[2*an/3]=0;
            visited=new boolean[an+1];
            DFS(2*an/3);
            
            am=ob.nextInt();
            for(i=1;i<=am;i++)
            {
                au=ob.nextInt();
                av=ob.nextInt();
                ac=ob.nextLong();
                ans=0;
                
                if(level[au]>level[av])
                {
                    an=au;
                    au=av;
                    av=an;
                }
                
                while(level[av]!=level[au])
                {
                    if(mNo[av]<=ac)
                        ans^=mNo[av];
                    av=parent[av];
                }
                
                while(av!=au)
                {
                    if(mNo[av]<=ac)
                        ans^=mNo[av];
                    av=parent[av];
                    
                    if(mNo[au]<=ac)
                        ans^=mNo[au];
                    au=parent[au];
                }
                System.out.println(ans);
            }
        }
    }
} 

class Zeno
{
    int a;
    long b;
}