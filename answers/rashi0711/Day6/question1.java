import java.util.Scanner;

public class extracandies {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int arr[]=new int[n];
		int extracandies=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			int k=arr[i]+extracandies;
			boolean m=max(arr,k);
			System.out.print(m+" ");
		}
		
	}
	public static boolean max(int arr[],int k)
	{
		int max=0;
		for(int i=0;i<arr.length;i++)
		{
			if(k>=arr[i])
			{
			max=k;	
			}
			else
			{
				max=arr[i];break;
			}
		}
		if(max==k)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

