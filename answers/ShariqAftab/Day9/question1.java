import java.util.*;
public class day9_1
{
    public static void mian()
    {
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the size of the array");
        int n=sc.nextInt();
        int nums[]=new int [n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<n;i++)
            nums[i]=sc.nextInt();
       int max=Integer.MIN_VALUE;
        int sum=0;
        for (int i=0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
                for (int k=i; k<=j; k++)
                    sum+=nums[k];
                if(sum>max)
                {
                   max=sum;
                }
                sum=0;
            }
        }
        System.out.println(max);
    }

}
