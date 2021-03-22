import java.util.Scanner;

public class subarray {

	public static void main(String[] args) {
		int n;int s=0;int j=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int i=1;
		int arr[]=new int[n];
		for(int k=0;k<n;k++)
		{
			arr[k]=sc.nextInt();
		}
		while(i<=n)
		{
			j=0;
			while(j<=n-i)
			{
			s=s+sum(j,i+j,arr);	
			j++;
			}
		i=i+2;
		}
		System.out.println("Sum is "+s);
	}
	public static int sum(int j,int i,int arr[])
	{
		int c=0;
		for(int k=j;k<i;k++)
		{
			c=c+arr[k];
		}
		return c;
	}

}
