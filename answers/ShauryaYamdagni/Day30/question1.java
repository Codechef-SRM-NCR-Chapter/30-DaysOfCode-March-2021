import java.util.*;
class shaurya
{
    public static int findindex(String s,String[] arr1)
    {
        for(int x=0;x<arr1.length;x++)
        {
            if(arr1[x].equals(s))
            return x;
        }
        return -1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(),m=sc.nextInt();
        int x,y,z;
        String[] arr1=new String[m];
        String[] arr2=new String[m];
        for(x=0;x<m;x++)
        {
            arr1[x]=sc.next();
            arr2[x]=sc.next();
        }
        String[] arr=new String[n];
        for(x=0;x<n;x++)
        {
            arr[x]=sc.next(); 
        }

        // for(x=0;x<n;x++)
        // {
        //     System.out.println(arr[x]);
        // }
        // System.out.println("  ");
        // System.out.println("  ");
        // for(x=0;x<m;x++)
        // {
        //     System.out.println(arr1[x]);
        // }
        // System.out.println("  ");
        // System.out.println("  ");
        // for(x=0;x<m;x++)
        // {
        //     System.out.println(arr2[x]);
        // }
        for(x=0;x<arr.length;x++)
        {
            int k=findindex(arr[x], arr1);
            if(arr2[k].length()<arr1[k].length())
            System.out.print(arr2[k]+" ");
            if(arr1[k].length()<arr2[k].length() || arr2[k].length()==arr1[k].length())
            System.out.print(arr1[k]+" ");
        }
        System.out.println();
    }
}
