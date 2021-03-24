import java.util.*;
class sumoddlength
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of terms");
		int n=sc.nextInt();
		int sum=0;
		int A[]=new int[n];
		System.out.println("Enter terms");
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j+=2)
			{
				for(int k=i;k<=j;k++)
				{
					sum=sum+A[k];
				}
			}
		}
		System.out.println("Sum is "+sum);
	}
}
