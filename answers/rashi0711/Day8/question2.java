import java.util.Scanner;

public class maxpairs {

	public static void main(String[] args) {
		int n;int c=0;int s=0;int max1=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		if(n%2!=0)
		{
			System.out.print("Invalid length");
		}
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int t=min(arr[i],arr[j]);
				s=s+t;
				
				c++;
				if(c==2)
				{
					max1=max(max1,s);
					c=0;s=0;
					
				}
				
			}
				
		}
		System.out.print(max1);
	}
	public static int min(int a,int b)
	{
		if(a>b)
		{
			return b;
		}
		else
		{
			return a;
		}
	}
	public static int max(int a,int b)
	{
		if(a>b)
		{
			return a;
		}
		else
		{
			return b;
		}
	}

}
