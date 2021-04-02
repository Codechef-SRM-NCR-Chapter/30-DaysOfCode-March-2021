import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the number of elements in the array");
        int n=sc.nextInt();
        int x;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter the number ");
            arr[x]=sc.nextInt();
        }
        int start=0,end=arr.length -1,mid;
        boolean flag=false;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]==0)
            {
                start=mid+1;
            }
            else
            {
                if(arr[mid-1]==0 || arr[mid]==(arr.length-1)) 
                {
                    System.out.println(mid);
                    flag=true;
                    break;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
        if(flag==false)
        System.out.println("0");
    }
}
