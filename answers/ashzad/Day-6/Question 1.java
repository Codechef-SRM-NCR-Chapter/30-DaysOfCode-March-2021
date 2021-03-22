	import java.util.*;
	public class SubArraySum {
		public static void main(String[]args)
		{
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter the size of the array:");
			int l=sc.nextInt();
			int arr[]=new int[l];
			int i,sum=0;
			System.out.println("Enter the elements in the array:");
			for(i=0;i<l;i++)
			{
				arr[i]=sc.nextInt();
			}
			
			for(i=0;i<l;i++)
			{
				sum+=(((i + 1) * (l - i) + 1) / 2) * arr[i];
			}
			System.out.println("Sum = "+sum);
		}
	
	}
