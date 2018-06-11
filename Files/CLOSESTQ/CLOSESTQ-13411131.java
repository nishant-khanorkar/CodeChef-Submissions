import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

class Abc 
{
    public static void main(String[] args) 
    {
        Scanner ob=new Scanner(System.in);
        
        ArrayList<A> tr=new ArrayList<>();
        int aa,bb,cc;
        A p,q;
        char m;
        String u;
        int x,y,i,j,h,z,k,min,tt;
        aa=ob.nextInt();
        Iterator itr;
        for(i=1;i<=aa;i++)
        {
            u=ob.next();
            m=u.charAt(0);
            x=ob.nextInt();
            y=ob.nextInt();
            if(m=='+')
                tr.add(new A(x, y));
            if(m=='-')
            {
                itr=tr.iterator();
                while(itr.hasNext())
                {
                    p=(A)itr.next();
                    //System.out.println("...."+p.x+" "+p.y);
                    if(p.x==x && p.y==y)
                    {
                        tr.remove(p);
                        break;
                    }
                }
                //tr.remove(new A(x,y));
                //System.out.println(tr.remove(new A(x,y)));
            }
           /* itr=tr.iterator();
            while(itr.hasNext())
            {
                p=(A)itr.next();
                System.out.println("...."+p.x+" "+p.y);
            }*/
            z=tr.size();
            if(z<2)
                System.out.println("0");
            else
            {
                min=500005;
                for(j=0;j<z;j++)
                {
                    for(h=j+1;h<z;h++)
                    {
                        p=tr.get(j);
                        q=tr.get(h);
                        tt=(p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y);
                        if(tt<min)
                            min=tt;
                    }
                }
                System.out.println(min);
            }
        }
    }   
}

class XYZ implements Comparator<A>
{
    @Override public int compare(A e1,A e2) 
    { 
        if((e1.x==e2.x)&&(e1.y==e2.y))
            return 0;
        return 1;
    } 
}

class A
{
    int x,y;
    public A(int x, int y) {
        this.x = x;
        this.y = y;
    }
}