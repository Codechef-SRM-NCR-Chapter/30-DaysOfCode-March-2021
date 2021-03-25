import java.util.Scanner;

public class maxsubarray {

	public static void main(String[] args) {
		int n;int target;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int c=0;
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		target=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i!=j)&&(arr[i]+arr[j]==target))
				{
				c++;
				
			    if(c==1)
				{
					System.out.print(i+" "+j+" ");	
				}}
		}

	}

}}
