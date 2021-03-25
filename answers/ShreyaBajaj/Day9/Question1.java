import java.util.*;
class targetsum
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no.of terms");
		int n=sc.nextInt();
		System.out.println("Enter target");
		int target=sc.nextInt();
		int A[]=new int[n];
		System.out.println("Enter the terms");
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		int a=0,b=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				continue;
				if(A[i]+A[j]==target)
				{
				      a=i;
				      b=j;
				      break;
				 }
		        }
		}
        System.out.println("OUTPUT:"+ b+","+ a);
	}
}
