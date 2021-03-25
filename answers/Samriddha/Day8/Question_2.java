import java.util.*;
public class Question_2
{
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[])
    {
        System.out.print("Enter the length of the array(must be even no.) : ");
        int l = sc.nextInt();
        int nums[]=new int[l];
        System.out.println("Enter the array elements : ");
        for(int i=0;i<l;i++)
        {
            System.out.print("Enter the element no. "+(i+1)+" ");
            nums[i]=sc.nextInt();
        }
        for(int i = 0;i<l-1;i++)
        {
            int min_idx = i;
            for(int j=i+1;j<l;j++)
            {
                if(nums[j]<nums[min_idx])
                    min_idx=j;
            }
            int temp = nums[min_idx];
            nums[min_idx]=nums[i];
            nums[i]=temp;
        }
        int sum1=0;
        for(int i=0;i<l;i+=2)
            sum1+=nums[i];
        System.out.print(sum1);
    }
}
