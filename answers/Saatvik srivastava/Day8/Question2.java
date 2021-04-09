import java.util.*;
public class Day8q2
{
    static Scanner sc = new Scanner(System.in);
    public static void main(String args[])
    {
        System.out.print("Enter the lenength of the array : ");
        int len = sc.nextInt();
        int nums[]=new int[len];
        System.out.println("Enter the array elenements : ");
        for(int i=0;i<len;i++)
        {
            
            nums[i]=sc.nextInt();
        }
        for(int i = 0;i<len-1;i++)
        {
            int min = i;
            for(int j=i+1;j<len;j++)
            {
                if(nums[j]<nums[min])
                    min=j;
            }
            int temp = nums[min];
            nums[min]=nums[i];
            nums[i]=temp;
        }
        int sum1=0;
        for(int i=0;i<len;i+=2)
            sum1+=nums[i];
        System.out.print(sum1);
    }
}
