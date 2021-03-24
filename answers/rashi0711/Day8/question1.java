import java.util.Scanner;

public class unique {

	public static void main(String[] args) {
		int n;int s=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
			
		}
		for(int j=0;j<n;j++)
		{
			if(frequency(arr,arr[j])==false)
			{
				s=s+arr[j];
			}
		}
		System.out.print(s);

	}
	public static boolean frequency(int a[],int k)
	{
		int c=0;
	
		for(int i=0;i<a.length;i++)
		{
			if(a[i]==k)
			{
				c++;
			}
		}
		if(c>1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}
