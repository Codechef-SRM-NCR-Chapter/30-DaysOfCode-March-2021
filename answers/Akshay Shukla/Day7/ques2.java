import java.util.*;
class ques2d7
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter num in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        System.out.println("Enter index in form [n1,n2,n3,..]");
        String s1=sc.nextLine();
        s1=s1.substring(1,s1.length()-1);
        String[] arr1=s1.split(",");
        int[] in=new int[arr1.length];
        for(int i=0;i<arr1.length;i++)
        in[i]=Integer.valueOf(arr1[i]);
        ArrayList<Integer> tl=new ArrayList<Integer>(n.length);
        for(int i=0;i<n.length;i++)
            tl.add(in[i],n[i]);
        System.out.println(tl);
    }
}
