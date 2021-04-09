import java.util.Scanner;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the length of queue");
        int n=sc.nextInt();
        System.out.println("enter the place where you wanna break the queue");
        int b=sc.nextInt();
        int[] arr=new int[n];
        for(int x=0;x<n;x++)
        arr[x]=sc.nextInt();
        System.out.println();
        for(int x=b-1;x>=0;x--)
        {
            System.out.print(arr[x]);
        }
        for(int x=b;x<n;x++)
        {
            System.out.print(arr[x]);
        }
    }
}
