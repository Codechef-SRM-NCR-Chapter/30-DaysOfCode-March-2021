import java.util.Scanner;

public class contiguoussubarray {

	public static void main(String[] args) {
		int n;int s=0;int max=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			s=s+arr[i];
			if(s<0)
			{
				s=0;
			}
			else if(s>max)
			{
				max=s;
			}
		}
     System.out.print(max);
	}

}
