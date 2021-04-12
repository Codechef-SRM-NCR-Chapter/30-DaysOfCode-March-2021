import java.util.*;
class shaurya
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the size of array");
        int n=sc.nextInt();
        int moves=0;
        int[] arr=new int[n];
        arr[0]=sc.nextInt();
        for(int x=1;x<n;x++)
        {
            arr[x]=sc.nextInt();
            if(arr[x]<arr[x-1])
            {
                int diff=arr[x-1]-arr[x];
                moves=moves+diff;
            }
        }
        System.out.println(moves);
    }
}
