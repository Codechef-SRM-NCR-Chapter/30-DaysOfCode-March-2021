import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of terms in the array");
        int n=sc.nextInt();
        int x,y,z;
        int[] arr=new int[n];
        int sum=0;
        for(x=0;x<n;x++)
        {
            System.out.println("enter "+x+" index value");
            arr[x]=sc.nextInt();
            sum=sum+arr[x];
        }
        for(x=0;x<n;x++)
        {
            for(y=x+2;y<n;y=y+2)
            {
                for(z=x;z<=y;z++)
                {
                    sum=sum+arr[z];
                }
            }
        }
        System.out.println(sum);
    }
}
