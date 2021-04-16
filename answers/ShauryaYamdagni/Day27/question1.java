import java.util.*;
class shaurya
{
    public static int[] rightrotate(int[] arr)
    {
        int[] arr1=new int[arr.length];
        arr1[0]=arr[arr.length-1];
        for(int x=1;x<arr.length;x++)
        arr1[x]=arr[x-1];
        return arr1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),rc=sc.nextInt();
        int queries=sc.nextInt();
        int[] arr=new int[n];
        for(int x=0;x<arr.length;x++)
        arr[x]=sc.nextInt();
        for(int x=0;x<rc;x++)
        arr=rightrotate(arr);
        int[] querr=new int[queries];
        for(int x=0;x<queries;x++)
        querr[x]=sc.nextInt();
        for(int x=0;x<queries;x++)
        System.out.println(arr[querr[x]]);
    }
}
