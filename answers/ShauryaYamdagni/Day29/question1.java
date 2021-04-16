import java.util.*;
class shaurya
{
    public static int[] descending(int[] arr)
    {
        int temp;
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = i+1; j < arr.length; j++) 
            {
               if(arr[i] < arr[j]) 
               {
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
               }     
            }     
        }    
        return arr;
    }
    public static int[] asdcending(int[] arr)
    {
        int temp;
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = i+1; j < arr.length; j++) 
            {
               if(arr[i] > arr[j]) 
               {
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
               }     
            }     
        }    
        return arr;
    }
    // public static boolean check(int n)
    // {
    //     if(n%2020==0)
    //     return true;
    //     if(n%2021==0)
    //     return true;
    //     else
    //     {
    //         int q=n/2020;
    //         int temp=2020*(q-1);
    //         for(int x=1;x<=9;x++)
    //         if((temp + 2021*x)==n)
    //         return true;
    //     }
    //     return false;
    // }
    public static boolean sumcheck(int[] arr1,int[] arr2,int peak)
    {
        for(int x=0;x<arr1.length;x++)
        {
            if((arr1[x]+arr2[x])>peak)
            return false;
        }
        return true;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int testcase=sc.nextInt();
        int c=0;
        while(c<testcase)
        {
            int n=sc.nextInt();
            int x=sc.nextInt();
            int[] a=new int[n];
            int[] b=new int[n];
            for(int y=0;y<n;y++)
            {
                a[y]=sc.nextInt();
            }
            for(int y=0;y<n;y++)
            {
                b[y]=sc.nextInt();
            }
            a=asdcending(a);
            b=descending(b);
            System.out.println(sumcheck(a,b,x)?"YES":"NO");
            c++;
        }
    }
}
