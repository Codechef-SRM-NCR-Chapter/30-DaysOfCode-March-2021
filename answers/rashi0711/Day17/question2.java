import java.util.Scanner;

public class subarray {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int c=0;int s;int t=0;
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
			
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				t++;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			s=arr[i];
			for(int j=i+1;j<n;j++)
			{
				
				
				s=s+arr[j];
				if(s==0)
				{
					c++;s=0;
				}
				
			}
		}
		System.out.println(c+t);

	}

}
