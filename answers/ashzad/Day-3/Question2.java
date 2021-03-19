import java.util.*;
public class UniqueNumber {
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number:");
		int n=sc.nextInt();
		int i,d;
		for(i=0;i<=9;i++)
		{
			int c=0;
			int cp=n;
			while(cp!=0)
			{
				d=cp%10;
				cp=cp/10;
				if(i==d)
					c++;
			}
			//System.out.print(c);
			if(c>1)
			{
				System.out.println("The number is not a unique number:");
				return;
			}
			
		}
		System.out.println("The number is a unique number");
	}

}
