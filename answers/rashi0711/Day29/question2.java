import java.util.Scanner;

public class divisiblenumber {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();int p=0;int arr[]=new int[t];
		while(p<t)
		{
		int n=sc.nextInt();
		
		if(n%2020==0||n%2020==2021)
		{
			int j=n-2020;
			if(j==0)
			{
				arr[p]=0;
			}
			else if(j%2021==0)
			{
			    arr[p]=1;
			}
			else if(j%2020==0)
			{
				arr[p]=1;
			}
			else
			{
				arr[p]=0;
			}
		}
		else if(n%2021==0||n%2021==2020)
		{
			int j=n-2021;
			if(j==0)
			{
				arr[p]=0;
			}
			else if(j%2020==0)
			{
				arr[p]=1;
			}
			else if(j%2021==0)
			{
				arr[p]=1;
			}
			else
			{
				arr[p]=0;
			}
		}
		else if(n%2020!=0&&n%2021!=0)
		{
			arr[p]=0;
		}
		p++;

	}
		for(int i=0;i<t;i++)
		{
			if(arr[i]==1)
			{
				System.out.println("YES");
			}
			else if(arr[i]==0)
			{
				System.out.println("NO");
			}
		}
	}
}
