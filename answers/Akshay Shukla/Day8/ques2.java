import java.util.*;
class ques2d8
{
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
        Arrays.sort(n);//sorting in ascending order and then pairing
        int sum=0;
        for(int i=0;i<n.length;i+=2)// sum of min of pair in ascending order gives max sum
        sum=sum+n[i];
        System.out.println(sum);
    }
}
