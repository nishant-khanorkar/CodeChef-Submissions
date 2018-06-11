#include <stdio.h>

int main()
{
   int a;
   float b,c;
   
        scanf("%d%f",&a,&b);
        if(a%5==0 && a<=b+0.5 && a>0 && b>=0)
        {
                c=b-a-0.5;
                if(c>=0)
                    b=c;
        }
    
        printf("%.2f",b);
  
    return 0;
}