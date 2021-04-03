import java.util.*;

class BinaryArray {
    public static int findPoint(int arr[], int lb,int ub)
    {
        if (lb > ub)
            return -1;
        int mid = (lb + ub) / 2;
        if (arr[mid] == 0)
            lb = mid + 1;
        if (arr[mid] == 1) 
        {
            if (mid == 0|| (mid > 0 && arr[mid - 1] == 0))
                return mid;
            ub = mid - 1;
        }
        return findPoint(arr, lb,ub);
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
        int lb = 0, ub = n - 1;
        int point = findPoint(arr, lb,ub);
        if(point>=0)
            System.out.println("Transition point is " + point);
        else
            System.out.println ("There is no transition point");
    }
}


