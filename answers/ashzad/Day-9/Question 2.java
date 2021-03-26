import java.util.*;

public class Ques2

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

        System.out.println("Enter the target :");

        int t=sc.nextInt();

        for (int i=0; i <n-1; i++)

        {

            for (int j=i+1; j<n; j++)

            {

                if(nums[i]+nums[j]==t)

                {

                    System.out.println("["+i+","+j+"]");

                    return;

                }

            }

        }

    }

}
