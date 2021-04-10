import java.util.*;
class shaurya
{
    static int steps=0;
    public static void printar(int[] arr)
    {
        System.out.println();
        for(int x=0;x<arr.length;x++)
        System.out.print(arr[x]);
    }
    public static boolean checkall0(int[] arr)
    {
        for(int x=0;x<arr.length;x++)
        {
            if(arr[x]!=0)
            return false;
        }
        return true;
    }
    public static boolean checkalleven(int[] arr)
    {
        for(int x=0;x<arr.length;x++)
        {
            if(arr[x]%2!=0)
            return false;
        }
        return true;
    }
    public static int[] decrementbyone(int[] arr)
    {
        int x;
        for(x=0;x<arr.length;x++)
        {
            if(arr[x]%2!=0)
            {
                arr[x]=arr[x]-1;
                steps=steps+1;
            }
        }
        // printar(arr);
        return arr;
    }
    public static int[] divideeachelementby2(int[] arr)
    {
        steps++;
        for(int x=0;x<arr.length;x++)
        {
            arr[x]=arr[x]/2;
        }
        // printar(arr);
        return arr;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of elements in the array");
        int n=sc.nextInt();
        int x,y,z;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter the number");
            arr[x]=sc.nextInt();
        }
        for(x=0;x<1000;x++)
        {
            if(!(checkall0(arr)))
            {
                while(!(checkalleven(arr)))
                {
                    arr=decrementbyone(arr);
                }
                    arr=divideeachelementby2(arr);
            }
            else
            {
                break;
            }
        }
        System.out.println(steps-1);
    }
}
