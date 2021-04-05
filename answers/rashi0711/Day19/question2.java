import java.util.Scanner;

public class triplets {

	public static void main(String[] args) {
		int c=0;
		Scanner sc=new Scanner(System.in);int n=sc.nextInt();
		int x=sc.nextInt();int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if(arr[i]+arr[j]+arr[k]<x)
					{
						c++;
					}
				}
			}
		}
		System.out.println("The number of triplets is "+c);

	}

}
