import java.util.*;
class Question_2
{
    static int len;
    public static int arr[];
    static int OddLengthSum(int[] arr)
    {
        int sum = 0;
        for(int i = 0; i < len; i++)
        {
            for(int j = i; j < len; j += 2)
            {
                for(int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }
            }
        }
        return sum;
    }
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("ENTER THE NO. OF ELEMENTS YOU WANT IN AN ARRAY : ");
        len = sc.nextInt();
        arr= new int[len];
        for(int i=0;i<len;i++)
        {
            System.out.println("Enter element no. " + (i+1));
            arr[i]=sc.nextInt();
        }
        System.out.print("Sum of all the odd length subarrays is : "+OddLengthSum(arr));
    }
}
