import java.util.Scanner;
class shaurya
{
    // static int arr[],sum=0;
    public static int[] sumarray(int[] arr1,int[] arr2,int[] arrsum,int n)
    {
        if(n==-1)
        {
            return(arrsum);
        }
        else
        {
            arrsum[n]=arr1[n]+arr2[n];
        //  System.out.println(arrsum[n]);
            return(sumarray(arr1,arr2,arrsum,n-1));
        }
    }
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number of elements in the first array ");
        int n=sc.nextInt();
        int[] arr1=new int[n];
        for(int x=0;x<n;x++)
        {
            System.out.println("enter the number");
            arr1[x]=sc.nextInt();
        }
        System.out.println("enter the number of elements in the second array ");
        int m=sc.nextInt();
        int[] arr2=new int[m];
        for(int x=0;x<m;x++)
        {
            System.out.println("enter the number");
            arr2[x]=sc.nextInt();
        }
        int x;
        if(arr1.length>arr2.length)
        {
            int[] arrsum=new int[arr2.length];
            arrsum=sumarray(arr1,arr2,arrsum,arr2.length-1);
            for(x=0;x<arrsum.length;x++)
            System.out.println(arrsum[x]);
            for(x=arrsum.length;x<arr1.length;x++)
            System.out.println(arr1[x]);
        }
        else
        {
            int[] arrsum=new int[arr1.length];
            arrsum=sumarray(arr1,arr2,arrsum,arr1.length-1);
            for(x=0;x<arrsum.length;x++)
            System.out.println(arrsum[x]);
            for(x=arrsum.length;x<arr2.length;x++)
            System.out.println(arr2[x]);
        }
    }
}
