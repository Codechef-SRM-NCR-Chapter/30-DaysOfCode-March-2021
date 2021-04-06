import java.util.*;
class shaurya
{
    static boolean present(int num,int[] arr)
    {
        int count=arr.length;
        for(var i=0;i<count;i++)
        {
            if(arr[i]==num)
                {
                    return true;
                }
        }
        return false;
    }
    public static int missing(int[] arr)
    {
        int smallest=arr[0],largest=0;
        for(int x=0;x<arr.length;x++)
        {
            if(arr[x]<smallest)
            smallest=arr[x];
            if(arr[x]>largest)
            largest=arr[x];
        }    
        // System.out.println(smallest+"   "+largest);
        for(int x=smallest;x<largest;x++)
        {
                if(!(present(x, arr)))
                {
                    return x;
                }
                // else
                // {
                    
                // }
        }
        return -1;
    }
    public static int repeating(int[] arr)
    {
        for(int x=0;x<arr.length;x++)
        {
            for(int y=x+1;y<arr.length;y++)
            {
                if(arr[x]==arr[y])
                return arr[x];
            }
        }
        return -1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        int x;
        System.out.println("enter the length of array");
        int n=sc.nextInt();
        System.out.println("enter the elements");
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            arr[x]=sc.nextInt();
        }
        if(missing(arr)>=0)
        System.out.println(missing(arr)+" is the missing element");
        else
        System.out.println("no missing element");
        if(repeating(arr)>=0)
        System.out.println(repeating(arr)+" is the repeating element");
        else
        System.out.println("no repeating element");
    }
}
