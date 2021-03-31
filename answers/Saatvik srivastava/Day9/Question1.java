import java.util.*;
public class day9q1
{
    public static void main()
    {
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the size of  array");
        int size=sc.nextInt();
        int nums[]=new int [size];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<size;i++)
            nums[i]=sc.nextInt();
        System.out.println("Enter the target Element ");
        int target=sc.nextInt();
        for (int i=0; i <size-1; i++)
        {
            
                if(nums[i]+nums[i+1]==target)
                {
                    System.out.println("["+i+","+(i+1)+"]");
                    return;
                }
            
        }
    }

}
