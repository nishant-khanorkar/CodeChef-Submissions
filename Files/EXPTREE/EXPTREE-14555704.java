import java.util.Scanner;

class Megatron
{
    static long gcd(long a,long b)
    {
        if(b==0)
            return a;
        else
            return gcd(b,a%b);
    }
    
    static long fastPOW(long a,long x,long M) 
    {
        a%=M;
        long result=1;
        while(x>0) 
        {
            if(x%2==1) 
                result=(result*a)%M;
            a=(a*a)%M;
            x>>=1;
        }
        return result;
    }
        
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        int xt=ob.nextInt();
        long xn,dn,xn1,a1,a2,m1=1000000007,m2=1000000009;
        
        
        while(xt-->0)
        {
            xn=ob.nextLong();
            xn1=xn-1;
            dn=2*xn-3;
            if(xn%2==0)
                xn/=2;
            else
                xn1/=2;
            
            a1=gcd(xn,dn);
            xn/=a1;
            dn/=a1;
            
            a1=gcd(xn1,dn);
            xn1/=a1;
            dn/=a1;
            
            a1=(((xn%m1)*(xn1%m1))%m1 * fastPOW(dn,m1-2,m1)%m1 )%m1;
            
            a2=(((xn%m2)*(xn1%m2))%m2 * fastPOW(dn,m2-2,m2)%m2 )%m2;
            
            System.out.println(a1+" "+a2);
        }
    }
}