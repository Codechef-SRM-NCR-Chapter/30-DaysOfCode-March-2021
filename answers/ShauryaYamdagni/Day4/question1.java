import java.io.*;
import java.util.*;
class shaurya
{
    public static boolean primecheck(int n)
    {
        int x,y=0;
        for(x=1;x<=n;x++)
        {
            if(n%x==0)
            y++;
        }
        if(y==2)
        return(true);
        else
        return(false);
    }

    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int n= sc.nextInt();
        int l=n;
        int m=n;
        int x,y,z,a,b,c;
        for(x=2;x<=n;x++)
        { 
            l=m;
        if(primecheck(x))
        {
            while(l%x==0)
            {
                System.out.print(x+" , ");
                l=l/x;
            }
        }
        }
    }
}
