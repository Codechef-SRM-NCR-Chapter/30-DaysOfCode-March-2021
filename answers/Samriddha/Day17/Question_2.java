import java.util.*;
class Question_2 
{
    public static void main(String[] args)
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
        int x = 0;
        int sarr = 0;
        for (int i = 0; i < n; i++) 
        {
            int s = 0;
            for (int j = i; j < n; j++) 
            {
                s += arr[j];
                if (s == x)
                    sarr++;
            }
        }
        System.out.println(sarr);
    }
}
