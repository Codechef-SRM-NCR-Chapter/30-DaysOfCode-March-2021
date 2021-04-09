import java.util.*;
class repeating_missing
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of elements");
		int n = sc.nextInt();
		int a=0,b=0;
		int arr[] = new int[n];
	    System.out.println("Enter elements in array");
	    for(int i=0;i<n;i++)
		arr[i]=sc.nextInt();
		Arrays.sort(arr,0,n);
		int c=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]==c)
			c++;
			else
			{
				a=c;
				c++;
			}
			if(i!=n-1 && arr[i]==arr[i+1])
			b=arr[i];
		}
		System.out.println(b+" "+a);
    }
}
