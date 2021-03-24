import java.util.Scanner;

public class goodtriplets {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int s=0;
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				if(Math.abs(arr[i]-arr[j])<=a)
				{
					for(int k=j+1;k<n;k++)
					{
						if((Math.abs(arr[j]-arr[k])<=b)&&(Math.abs(arr[k]-arr[i])<=c))
							s++;
					}
				}
			}
		}
		System.out.print(s);

	}

}
