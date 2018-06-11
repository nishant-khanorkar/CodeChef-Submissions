import java.util.Scanner;

class Megatron
{   
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        int at=ob.nextInt(),an,i;
        long M=1000000007,coef[]=new long[15],a,b,c;
        
        while(at-->0)
        {
            an=ob.nextInt();
            
            if(an==1)
            {
                a=ob.nextLong();
                
                coef[2]=1;
                coef[1]=0;
                coef[0]=(-a+M)%M;
                
                System.out.println("2");
                for(i=0;i<=2;i++)
                    System.out.print(coef[i]+" ");
                System.out.println();
            }
            if(an==2)
            {
                a=ob.nextLong();
                b=ob.nextLong();
                
                coef[4]=1;
                coef[3]=0;
                coef[2]=(-2*(a+b))%M;
                coef[1]=0;
                coef[0]=((a-b)*(a-b))%M;
                
                System.out.println("4");
                for(i=0;i<=4;i++)
                {
                    while(coef[i]<0)
                        coef[i]+=M;
                    System.out.print(coef[i]+" ");
                }
                System.out.println();
            }
            if(an==3)
            {
                a=ob.nextLong();
                b=ob.nextLong();
                c=ob.nextLong();
                
                long x=(a+b+c),y=x*x,z=(a*a+b*b+c*c-2*a*b-2*b*c-2*c*a)%M;
                
                coef[8]=1;
                coef[7]=0;
                coef[6]=(-4*x)%M;
                coef[5]=0;
                coef[4]=(2*z+(4*(x*x)%M)%M)%M;
                coef[3]=0;
                coef[2]=(-((4*x*z)%M+(((((64*a)%M)*b)%M)*c)%M))%M;
                coef[1]=0;
                coef[0]=(z*z)%M;
                
                System.out.println("8");
                for(i=0;i<=8;i++)
                {
                    while(coef[i]<0)
                        coef[i]+=M;
                    System.out.print(coef[i]+" ");
                }
                System.out.println();
            }
        }
    }
}