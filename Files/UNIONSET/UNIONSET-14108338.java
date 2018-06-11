import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class Abc 
{
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        int gg=ob.nextInt(),hh,i,z,jj,j,k,sum,p,flag;
        YY data[];
        ArrayList<Integer> ab;
        while(gg-- > 0)
        {
            hh=ob.nextInt();
            jj=ob.nextInt();
            
            data=new YY[hh];
            
            for(i=0;i<hh;i++)
            {
                z=ob.nextInt();
                data[i]=new YY(z,jj);
                for(j=0;j<z;j++)
                {
                    k=ob.nextInt();
                    data[i].aa.add(k);
                    data[i].vis[k]=true;
                }
            }
            Arrays.sort(data);
            sum=0;
            
            for(j=0;j<hh;j++)
            {
                if(data[j].ss==jj)
                    sum+=hh-j-1;
                else
                    break;
            }
            for(i=j;i<hh;i++)
            {
                if(i+1<hh && data[i+1].ss>=(p=jj-data[i].ss))
                {
                    ab=new ArrayList<>();
                    for(z=1;z<=jj;z++)
                        if(!data[i].vis[z])
                            ab.add(z);
                    for(k=i+1;k<hh;k++)
                    {
                        if(data[k].ss>=p)
                        {
                            flag=1;
                            for(int ui:ab)
                                if(!data[k].vis[ui])
                                {
                                    flag=0;
                                    break;
                                }
                            sum+=flag;
                        }
                        else
                            break;
                    }
                }
                else 
                    break;
            }
            System.out.println(sum);
        }
    }
}

class YY implements Comparable<YY>
{
    int ss;
    ArrayList<Integer> aa=new ArrayList<>();
    boolean vis[];
    YY(int ss,int jj) 
    {
        this.ss=ss;
        vis=new boolean[jj+1];
    }

    @Override
    public int compareTo(YY t) 
    {
        return t.ss-ss;
    }
}