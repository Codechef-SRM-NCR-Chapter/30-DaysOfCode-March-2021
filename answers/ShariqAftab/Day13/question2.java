import java.util.*;
public class FirstRec
{
    public static void main()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the size of the Array");
        int n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter the elements");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        if(isPal(a,0,n-1))
            System.out.println("PALINDROME");
        else
            System.out.println("NOT A PALINDROME");
    }
    public static boolean isPal(int arr[],int f,int r)
    {
        if(arr[f]!=arr[r])
            return false;
        if(r<f)
            return true;
        f++;
        r--;
        return isPal(arr,f,r);
    }
}
