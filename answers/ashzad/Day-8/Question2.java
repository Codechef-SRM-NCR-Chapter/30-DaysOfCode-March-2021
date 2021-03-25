import java.util.*;
public class MinPairSum 
{
    public static int minPairSum(int[] nums) 
    {
        Arrays.sort(nums);
        int sum = 0;
        for(int i = 0 ; i < nums.length-1; i= i+2){
            sum = sum+nums[i];
        }
        return sum;
    }

    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the value of n:");
        int n=sc.nextInt();
        int arr[]=new int[2*n];
        System.out.println("Enter the value of 2Xn elements into the array:");
        for(int i=0;i<5;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println(minPairSum(arr));
    }
}
