
import java.util.*;
public class PalindromeArray {
    public static int ispalindrome(int arr[], int strt, int end)
    {
        if (strt >= end) {
            return 1;
        }
        if (arr[strt] == arr[end]) 
            return ispalindrome(arr, strt + 1, end - 1);
        else 
            return 0;
        
    }

    public static void main (String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int n = sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements in the array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Output:");
        if (ispalindrome(arr, 0, n - 1) == 1)
            System.out.print( "Palindrome");
        else
            System.out.println( "Not Palindrome");
    }
}
