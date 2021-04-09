import java.util.Scanner;

public class arraydigits {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}int d=0;int r=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				d=d*10+arr[i];
						
			}
			else if(i%2!=0)
			{
				r=r*10+arr[i];
			}
		}
		System.out.print(d+r);
		

	}

}
