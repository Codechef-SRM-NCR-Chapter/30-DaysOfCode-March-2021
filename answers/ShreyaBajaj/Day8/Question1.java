import java.util.*;
class uniquesum
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner (System.in);
			System.out.println("Enter no. of terms");
			int n=sc.nextInt();
			int A[]=new int[n];
			System.out.println("Enter terms");
			for(int i=0;i<n;i++)
			{
				A[i]=sc.nextInt();
			}
			int sum=0,c=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(A[i]==A[j]&& i!=j)
					{
					   c=0;
					   break;
				         }
					else
					c=A[i];
				}
				sum=sum+c;
			}
			System.out.println("Sum is "+sum);
	}
}
