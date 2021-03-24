import java.util.*;
class sumarray
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of terms");
		int n=sc.nextInt();
		int A[]=new int[n];
		System.out.println("Enter terms");
		for(int i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		int s=0;
		for(int i=0;i<n;i++)
		{
			Arrays.sort(A);
		}
		for(int i=0;i<n;i+=2)
		{
		    s=s+A[i];
		}
		System.out.println("Maximized sum "+s);
	}
}
