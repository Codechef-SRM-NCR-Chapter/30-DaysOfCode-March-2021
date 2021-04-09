import java.util.*;
class ques2d9
{
    static int m=0;
    static void SubArrays(int[]arr, int start, int end)
    {     
        if (end == arr.length) 
        return;
        else if (start > end) 
        SubArrays(arr, 0, end + 1);
        else
        {
            int sum=0;
            for (int i = start; i <= end; i++)
            {
                sum+=arr[i];
            }
            if(sum>m)
            m=sum;
            SubArrays(arr, start + 1, end);
        }
        return;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        SubArrays(n,0,0);
        System.out.println(m);
    }
}
