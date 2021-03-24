import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x,y,z,sum=0;
        System.out.println("Enter the number of elements you want in the array");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter value");
        arr[x]=sc.nextInt();
        }
        boolean flag;
        for(x=0;x<n;x++)
        {
            flag=true;
            for(y=0;y<n;y++)
            {
                if(x==y)
                {
                    continue;
                }
                if(arr[x]==arr[y])
                {
                    flag=false;
                }
            }
            if(flag==true)
            {
                sum=sum+arr[x];
            }
        }
        System.out.println(sum);
    } 
}
