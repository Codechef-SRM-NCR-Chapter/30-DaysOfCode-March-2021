import java.util.*;
class shaurya
{
    public static int[] permute(int[] arr,int peak)
    {
        int peakcount=0;
        for(int x=arr.length-1;x>=0;x--)
        {
            for(int y=1;y<arr.length;y++)
            {
                if(peakcount<peak)
                {
                    if(arr[x]>arr[y-1] && arr[x]>arr[y+1])
                    {
                        int t=arr[x];
                        arr[x]=arr[y];
                        arr[y]=t;
                        peakcount++;
                    }
                }
                else
                break;
            }
        }
        return arr;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int testcase=sc.nextInt();
        int c=0;
        while(c<testcase)
        {
            int n=sc.nextInt();
            int arr[] = new int[n];
            for(int aa=0;aa<n;aa++)
            arr[aa]=aa+1;
            int peak=sc.nextInt();
            arr=permute(arr,peak );
            for(int x=0;x<arr.length;x++)
            System.out.print(arr[x]);
            c++;
        }
    }
}
