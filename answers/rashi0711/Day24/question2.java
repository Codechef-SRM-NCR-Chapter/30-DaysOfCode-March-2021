import java.util.Scanner;

public class minimummoves {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int t=0;int c=0;
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		while(true)
		{
			
			for(int i=0;i<n;i++)
			{
				if(arr[i]%2!=0)
				{
					arr[i]=arr[i]-1;t++;
				}
			}
			for(int i=0;i<n;i++)
			{
				if(arr[i]==0)
				{
					c++;
				}
			}
			if(c>=n)
			{
				System.out.println(t);
				break;
			}
			for(int i=0;i<n;i++)
			{
				arr[i]=arr[i]/2;
				
			}
			t++;
		}

	}

}
