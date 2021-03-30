import java.util.*;
class array_palindrome
{
	static int check_palindrome(int arr[],int begin ,int end)
	{
		if(begin>=end)
		return 1;
		if(arr[begin]==arr[end])
		return check_palindrome(arr, begin+1,end-1);
		else
		return 0;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		int n=sc.nextInt();
		int arr[]=new int[n];
		System.out.println("Enter elements");
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		if(check_palindrome(arr,0,n-1)==1)
		System.out.println("Palindrome");
		else
		System.out.println("Not a Palindrome");
	}
}
