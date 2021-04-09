import java.util.*;
class Question_2
{
    static int min_sum(int arr[], int n)
    {
        Arrays.sort(arr);
        int a1=0, a2=0;
        for (int i=0;i<n;i++)
        {
            if (i%2!=0)
                a1=a1*10+arr[i];
            else
                a2=a2*10+arr[i];
        }
        return (a1+a2);
    }
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array : ");
        for(int i =0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" of array : ");
            arr[i]=sc.nextInt();
        }
        System.out.print("Sum is " + min_sum(arr, n));
    }
}
 
