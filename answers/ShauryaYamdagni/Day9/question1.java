import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x,y,z,sum=0,a=0,b=0;
        System.out.println("Enter the number of elements you want in the array");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter value");
            arr[x]=sc.nextInt();
        }
        System.out.println("enter the target value that you want ");
        int target = sc.nextInt();
        for(x=0;x<n;x++)
        {
            for(y=x;y<n;y++)
            {
                if(arr[x]+arr[y]==target)
                {
                    a=x;b=y;
                }
            }
        }
        System.out.println("["+a+" , "+b+"]");
    }
}
