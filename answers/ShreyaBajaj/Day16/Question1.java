 import java.util.*;
 class count_binary
 {
	 int count_Ones(int arr[], int low, int high)
    {
        if (high >= low)
        {
            int mid = (low + high) / 2;
            if ((mid == high || arr[mid + 1] == 0)&& (arr[mid] == 1))
            return mid + 1;
            if (arr[mid] == 1)
            return count_Ones(arr, (mid + 1), high);
            else
            return count_Ones(arr, low, (mid - 1));
        }
        return 0;
    }
    public static void main(String args[])
    {
		Scanner sc=new Scanner(System.in);
        count_binary ob = new count_binary();
        System.out.println("Enter no. of elements");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements in array");
        for(int i=0;i<n;i++)
        arr[i]=sc.nextInt();
        System.out.println("Count of 1's in given array is " + ob.count_Ones(arr, 0, n - 1));
    }
}
