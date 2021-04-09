import java.util.*;
class Question_2
{
    public static void main (String[] args)
    {
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter the length of the array : ");
        int l = sc.nextInt();
        int nums[]=new int[l];
        System.out.println("Enter the array elements : ");
        for(int i=0;i<l;i++)
        {
            System.out.print("Enter the element no. "+(i+1)+" ");
            nums[i]=sc.nextInt();
        }
        System.out.println("\n Maximum sum is " + get_max_Sub_Arr_Sum(nums));
    }

    static int get_max_Sub_Arr_Sum(int a[])
    {
        int len = a.length;
        int u = Integer.MIN_VALUE, d = 0;

        for (int i = 0; i < len; i++)
        {
            d = d + a[i];
            if (u < d)
                u = d;
            if (d < 0)
                d = 0;
        }
        return u;
    }
}
