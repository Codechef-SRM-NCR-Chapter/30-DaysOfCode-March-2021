import java.util.*;
public class Question_2 {
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();
        System.out.print("Enter the sum : ");
        int s = sc.nextInt();
        int t = 0;
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array : ");
        for(int i =0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" of array : ");
            arr[i]=sc.nextInt();
        }
        for (int i = 0; i < n-2; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                for (int k = j+1; k < n; k++)
                    if (arr[i] + arr[j] + arr[k] < s)
                        t++;
            }
        }
        System.out.print(t);
    }
}
