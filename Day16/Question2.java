import java.util.*;
class count_transition
{
	int transition_point(int arr[],int low,int high)
	{
		while(high >= low)
		{
		   int mid = (low + high) / 2;
		   if (arr[mid] == 1&& (mid == 0 || arr[mid - 1] == 0))
		   return mid;
		   if (arr[mid] == 1)
		   high=mid-1;
		   else
		   low=mid+1;
		 }
		 return -1;
	}
	public static void main(String args[])
	    {
			Scanner sc=new Scanner(System.in);
	        count_transition ob = new count_transition();
	        System.out.println("Enter no. of elements");
	        int n = sc.nextInt();
	        int arr[] = new int[n];
	        System.out.println("Enter elements in array");
	        for(int i=0;i<n;i++)
	        arr[i]=sc.nextInt();
	        System.out.println("Transition point "+ ob.transition_point(arr, 0,n-1));
	    }
}
