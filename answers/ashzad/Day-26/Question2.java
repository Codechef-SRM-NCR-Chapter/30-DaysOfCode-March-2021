import java.util.Scanner;

public class D26Q2
{
    static int minRemove(int arr[], int n)
    {
        int LIS[] = new int[n];
        int len = 0;
        for (int i = 0; i < n; i++)
            LIS[i] = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j] && (i-j)<=(arr[i]-arr[j]))
                    LIS[i] = Math.max(LIS[i], 
                        LIS[j] + 1);
            }
            len = Math.max(len, LIS[i]);
        }
        return n - len;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the  array :");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println(minRemove(arr, n));
    }
}
