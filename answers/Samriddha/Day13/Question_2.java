import java.util.*;
class Question_2
{
    static int palindrome_check(int arr[], int s, int e)
    {
        if (s >= e) {
            return 1;
        }
        if (arr[s] == arr[e]) {
            return palindrome_check(arr, s +1, e -1);
        }
        else {
            return 0;
        }
    }
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of the array : ");
        int len = sc.nextInt();
        int arr[] = new int[len];
        for(int i=0;i<len;i++)
        {
            System.out.print("Enter the element no."+(i+1)+" : ");
            arr[i] = sc.nextInt();
        }
        if (palindrome_check(arr, 0, len - 1) == 1)
            System.out.print("Palindrome.");
        else
            System.out.println("Not Palindrome.");
    }
}
