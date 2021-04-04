import java.util.*;
class sum_quad
{
	static void count(int a[],int n,int sum)
	{
		for(int i=0;i<n-4;i++)
		{
			for(int j=i+1;j<n-3;j++)
			{
				int k=sum-(a[i]+a[j]);
				int low=j+1,high=n-1;
				while(low<high)
				{
					if(a[low]+a[high]<k)
					low++;
					else if(a[low]+a[high]>k)
					high--;
					else
					{
					    System.out.println(a[i]+" "+a[j]+" "+a[low]+" "+a[high]);
					    low++;
					    high--;
				    }
				}
			}
		}
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n terms");
		System.out.println("Enter sum");
		int n=sc.nextInt();
		int s=sc.nextInt();
		int a[]=new int[n];
		System.out.println("Enter terms");
		for(int i=0;i<n;i++)
		a[i]=sc.nextInt();
		Arrays.sort(a);
		count(a,n,s);
	}
}
