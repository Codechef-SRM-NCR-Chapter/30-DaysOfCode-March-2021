import java.util.*;

class BinaryArray {
    public static int findPoint(int arr[], int n)
    {
        int lb = 0, ub = n - 1;

        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] == 0)
                lb = mid + 1;
            else if (arr[mid] == 1) 
            {
                if (mid == 0|| (mid > 0 && arr[mid - 1] == 0))
                    return mid;
                ub = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String args[])
    {
         Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the  array in 0 and 1:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int point = findPoint(arr, arr.length);
        if(point>=0)
            System.out.println("Transition point is " + point);
        else
            System.out.println ("There is no transition point");
    }
}
