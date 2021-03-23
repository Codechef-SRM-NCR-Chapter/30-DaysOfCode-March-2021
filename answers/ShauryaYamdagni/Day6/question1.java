import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of terms in the array");
        int n=sc.nextInt();
        int x;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter "+x+" index value");
            arr[x]=sc.nextInt();
        }
        System.out.println("enter the number of extra candies");
        int xtra =sc.nextInt();
        int largest=0;
        for(x=0;x<n;x++)
        {
            if(arr[x]>largest)
            largest=arr[x];
        }
        Boolean[] f=new Boolean[n];
        for(x=0;x<n;x++)
        {
            if((arr[x]+xtra)>=largest)
            f[x]=true;
            else 
            f[x]=false;
        }
        for(x=0;x<n;x++)
        {
            System.out.println(f[x]);
        }
    }
}
