import java.util.*;
class Question_1
{
    int appearances(int a[], int h, int l)
    {
        if (h >= l)
        {
            int m = l + (h - l) / 2;
            if ((m == h || a[m + 1] == 0) && (a[m] == 1))
                return (m + 1);
            if (a[m] == 1)
                return appearances(a, (m + 1), h);
            return appearances(a, l, (m - 1));
        }
        return 0;
    }
    public static void main(String args[])
    {
        Question_1 obj = new Question_1();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the sorted array : ");
        for(int i =0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" of array : ");
            arr[i]=sc.nextInt();
        }
        System.out.println("Count of 1's in given array is " + obj.appearances(arr, 0, n - 1));
    }
}
