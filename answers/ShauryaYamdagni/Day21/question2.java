import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of elements in the array ");
        int n=sc.nextInt();
        int x,y,z;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        arr[x]=sc.nextInt();
        for(x=0;x<n-1;x++)
        {
            for(y=0;y<n-1;y++)
            {
                if(arr[y]>arr[y+1])
                {
                    int t=arr[y];
                    arr[y]=arr[y+1];
                    arr[y+1]=t;
                }
            }
        }
        // for(x=0;x<n;x++)
        // System.out.println(arr[x]);
        int c=0,a=0,b=0;
        for(x=0;x<n;x=x+2)
        {
            a=a*10+arr[x];
            // c++;
        }
        // c=0;
        for(x=1;x<n;x=x+2)
        {
            b=b*10+arr[x];
        }
        System.out.println(a+b);
    }
}
