import java.util.*;
class count_transition
{
	int transition_point(int arr[],int n)
	{
		for(int i = 0; i < n ; i++)
		{
			if(arr[i] == 1)
		    return i;
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
	        System.out.println("Transition point "+ ob.transition_point(arr, n));
	    }
}
