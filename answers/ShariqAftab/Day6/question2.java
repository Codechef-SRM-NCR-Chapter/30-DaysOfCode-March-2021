import java.util.*;
public class Candies
{
    public static void main()
    {
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter the length of the array");
        int n=sc.nextInt();
        int arr[]=new int [n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        System.out.println("Extra Candies :");
        int ec=sc.nextInt();
        int max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
            if(arr[i]>max)
                max=arr[i];
        for(int i=0;i<n;i++)
            if(arr[i]+ec>=max)
                System.out.print("True,");
            else
            System.out.print("False,");
    }
}
