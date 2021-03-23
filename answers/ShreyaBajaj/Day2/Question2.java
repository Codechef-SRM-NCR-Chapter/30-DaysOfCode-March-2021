import java.util.*;
class disarium
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		System.out.println("Enter a number");
		int num=ob.nextInt();
		int copy=num,d=0,sum=0;
                String s=Integer.toString(n);
		int len=s.length();
                while(copy>0)
                {
                     d=copy%10;
                     sum=sum+(int)Math.pow(d,len);
                     len--;
                     copy=copy/10;
                 }
                if(sum==num)
                System.out.println("Disarium number");
                else
                System.out.println("Not a disarium number");
	}
}
