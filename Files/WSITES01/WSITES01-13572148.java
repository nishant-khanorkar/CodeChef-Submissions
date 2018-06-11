import static java.lang.System.exit;
import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

class Tree
{
    int blocked,unblocked;
    char leafChar;
    boolean leaf;
    Tree[] childN26;

    public Tree() 
    {
        childN26=new Tree[26];
        blocked=0;
        unblocked=0;
        leaf=false;
    }
} 

class Abc 
{
    static char[] ans;
    static int a,b,top;
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        TreeSet<String> trIP=new TreeSet<>();
        TreeSet<String> trOP=new TreeSet<>();
        Iterator itr;
        
        Tree root=new Tree();
        
        int i,j,nn=ob.nextInt();
        
        char cc;
        String ip,op;
        
        for(i=0;i<nn;i++)
        {
            cc=ob.next().charAt(0);
            ip=ob.next();
            
            insert(root, ip.toCharArray(), cc);
            
            if(cc=='-')
                trIP.add(ip);
        }
        
        itr=trIP.iterator();
        while(itr.hasNext())
        {
            op=(String)itr.next();
            trOP.add(filter(root, op.toCharArray()));
        }
        
        System.out.println(trOP.size());
        itr=trOP.iterator();
        while(itr.hasNext())
            System.out.println(itr.next());
    }
    
    static void insert(Tree node,char[] ar,char x)
    {
        if(x=='+')
            node.unblocked++;
        else
            node.blocked++;
        
        a=ar.length;
        for(int i=0;i<a;i++)
        {
            b=ar[i]-'a';
            if(node.childN26[b]==null)
                node.childN26[b]=new Tree();
            
            node=node.childN26[b];
            if(x=='+')
            {
                node.unblocked++;
                if(node.leaf && node.leafChar=='-')
                {
                    System.out.println(-1);
                    exit(0);
                }
            }
            else
                node.blocked++;
        }
        node.leaf=true;
        node.leafChar=x;
        if(x=='-' && node.unblocked>0)
        {
            System.out.println(-1);
            exit(0);
        }
    }
    
    static String filter(Tree node,char[] ar)
    {
        a=ar.length;
        ans=new char[a];
        top=0;
        for(int i=0;i<a;i++)
        {
            node=node.childN26[ar[i]-'a'];
            ans[top++]=ar[i];
            
            if(node.unblocked==0)
                return new String(ans, 0, top);
        }
        return new String(ans, 0, top);
    }
}