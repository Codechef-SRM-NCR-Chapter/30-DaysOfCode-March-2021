import java.util.*;
class unique
{
	public static void main(String args[])
	{
		int x,y,n,a,b,count=0;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number");
		n=sc.nextInt();
		x=n;
		y=n;
		while(x>0)
		{
			a=x%10;
			while(y>0)
			{
				b=y%10;
				if(a==b)
				count++;
				y=y/10;
			}
			x=x/10;
		}
		if(count==1)
		System.out.println("UNIQUE");
		else
		System.out.println("NOT A UNIQUE NUMBER");
	}
}
