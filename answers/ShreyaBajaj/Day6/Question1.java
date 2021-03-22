import java.util.*;
class candies
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of students");
		int n=sc.nextInt();
		int candy[]=new int[n];
		System.out.println("Enter extra candies");
		int extracandy=sc.nextInt();
		System.out.println("Enter no. of candies with each student");
		for(int i=0;i<n;i++)
		{
			candy[i]=sc.nextInt();
		}
		boolean result[]=new boolean[n];
		int max=candy[0];
		for(int i=1;i<n;i++)
		{
			if(max<candy[i])
			max=candy[i];
		}
		for(int i=0;i<n;i++)
		{
			if((candy[i]+extracandy)<max)
		    result[i]=false;
		    else
		    result[i]=true;
		}
		for(int i=0;i<n;i++)
		{
		    System.out.println(result[i]);
		}
	}
}
