import java.util.*;
class sum_array
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		sum_array dd=new sum_array();
		System.out.println("Enter n and m");
		int n=sc.nextInt();
		int m=sc.nextInt();
		int A[]=new int[n];
		int B[]=new int[m];
		System.out.println("Enter numbers in array 1");
		for(int i=0;i<n;i++)
		A[i]=sc.nextInt();
		System.out.println("Enter numbers in array 2");
		for(int i=0;i<m;i++)
		B[i]=sc.nextInt();
		List<Integer> result = new ArrayList<>();
		add(A, B, result);
             System.out.print(result);
	}
		static void split_number(int num, List<Integer> result)
		{
			if (num > 0)
		    {
		       split_number(num/10, result);
		       result.add(num % 10);
		    }
		}
		public static void add(int[] a, int[] b, List<Integer> result)
		{
		   int m = a.length, n = b.length;
		   int i = 0;
		   while (i < m && i < n)
		   {
			   int sum = a[i] + b[i];
		       split_number(sum, result);
		       i++;
		   }
		   while (i < m)
		   {
			   split_number(a[i++], result);
		   }
		   while (i < n)
		   {
			   split_number(b[i++], result);
		   }
	   }
}
