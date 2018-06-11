import java.util.Scanner;
import java.util.TreeSet;

class A implements Comparable<A>
{
    int x,y;
    public A(int x, int y) {
        this.x = x;
        this.y = y;
    }
    
    @Override
    public int compareTo(A e) 
    { 
        if(y < e.y)
            return 1;
        else if(y==e.y)
        {
            if(x==e.x)
                return 0;
            else if (x>e.x)
                return 1;
        }
        return -1;
    } 
} 

class Abc 
{
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        TreeSet tr=new TreeSet();
        
        int nnn,ppp,kkk,jjj,iii,i,j,l,a[]=new int[100005],val[]=new int[100005],ans[]=new int[100005];
        char u;
        nnn=ob.nextInt();
        kkk=ob.nextInt();
        ppp=ob.nextInt();
        String ss;
        jjj=0;
        if(nnn<=kkk)
        {
            for(i=0;i<nnn;i++)
            {
                iii=ob.nextInt();
                jjj+=iii;
            }
            ss=ob.next();
            for(i=0;i<ppp;i++)
            {
                u=ss.charAt(i);
                if(u=='?')
                    System.out.println(jjj);
            }
            return ;
        }
     
        for(i=0;i<kkk;i++)
        {
            a[i]=ob.nextInt();
            jjj+= a[i];
        }
        for(i=kkk,j=0;i<nnn;i++,j++)
        {
            a[i]=ob.nextInt();
            val[j]=jjj;
            jjj+= a[i]-a[j];
        }
        j=nnn-kkk;
        kkk--;
        for(i=0;i<kkk;i++,j++)
        {
            val[j]=jjj;
            jjj+=a[i]-a[j];
        }
        val[nnn-1]=jjj;
        kkk++;
        
        j=nnn-kkk+1;
        for(i=0;i<j;i++)
            tr.add(new A(i,val[i]));
        
        for(i=0;i<nnn;i++,j=(j+1)%nnn)
        {
           tr.remove(new A(i,val[i]));
           tr.add(new A(j,val[j]));
           ans[nnn-1-i]=((A)tr.first()).y;
        }
        
        l=0;
        ss=ob.next();
        for(i=0;i<ppp;i++)
        {
            u=ss.charAt(i);
            if(u=='?')
                System.out.println(ans[l]);
            else
                l=(l+1)%nnn;
        }
    }   
}