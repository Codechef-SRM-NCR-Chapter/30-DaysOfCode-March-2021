import java.util.Scanner;
class shaurya
{
    static int arr[],sum=0;
    public static int rec(int n)
    {
        if(n==-1)
        {
            return(0);
        }
        else
        {
            sum=sum+arr[n];
         // System.out.println(sum);
            return(rec(n-1));
        }
    }
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number of elements in the new array ");
        int n=sc.nextInt();
        arr=new int[n];
        for(int x=0;x<n;x++)
        {
            System.out.println("enter the number");
            arr[x]=sc.nextInt();
        }
        rec(n-1);
        System.out.println(sum);
    }
}
