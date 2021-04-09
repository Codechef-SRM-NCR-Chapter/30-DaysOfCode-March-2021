import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x,y,z,sum=0,lsum=0;
        System.out.println("Enter the number of elements you want in the array");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter value");
            arr[x]=sc.nextInt();
        }
        for(x=0;x<n;x++)
        {
            for(y=x;y<n;y++)
            {
                lsum=lsum+arr[y];
                if(lsum>sum)
                sum=lsum;
            }
            lsum=0;
        }
        System.out.println(sum);
    }
}
