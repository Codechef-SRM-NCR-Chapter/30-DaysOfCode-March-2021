import java.util.Scanner;

public class recurpalindrome {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		int t=palin(arr,0,n-1);
		if(t==1)
		{
			System.out.print("Palindrome");
			
		}
		else if(t==0)
		{
			System.out.print("Not Palindrome");
		}
}
	public static int palin(int arr[],int first,int last)
	{
		if(first==last||first>last)
		{
			return 1;
		}
		else if(arr[first]==arr[last])
		{
			first=first+1;
			last=last-1;
			 return palin(arr,first,last);
		}
		return 0;
	}
		
	}
