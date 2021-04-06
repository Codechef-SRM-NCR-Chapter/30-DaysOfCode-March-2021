import java.util.Scanner;

public class findingnumbers {

	public static void main(String[] args) {
		int n;int c=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==arr[j])
				{
					c++;
				}
			}
			if(c==2)
			{
				System.out.println("Repeating number is "+i);
			}
			if(c==0)
			{
				System.out.println("missing number is "+i);
			}
			c=0;
		}

	}

}
