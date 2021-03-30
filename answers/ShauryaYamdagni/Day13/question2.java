import java.util.Scanner;
class shaurya
{
    public static int[] rec(int arr[],int arr2[],int n,int c)
    {
        if(n==-1)
        {
            return(arr2);
        }
        else
        {
            arr2[c]=arr[n];
            c++;
            n--;
            return(rec(arr,arr2,n,c));
        }
    }
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number of elements in the new array ");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int x=0;x<n;x++)
        {
            System.out.println("enter the number");
            arr[x]=sc.nextInt();
        }
        int[] arr2=new int[n];
        arr2=rec(arr, arr2, n-1, 0);boolean flag=true;
        for(int y=0;y<n;y++)
        {
            if(arr[y]!=arr2[y])
            flag=false;
        }
        if(flag==true)
        {
            System.out.println("yes they are palindrome");
        }
        else
        {
            System.out.println("no thry are not palindrome");
        }
        //for(int x=0;x<n;x++)
        //System.out.println(arr2[x]);
    }
}
