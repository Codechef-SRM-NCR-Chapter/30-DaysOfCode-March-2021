import java.util.*;
class Question_2
{
    static int transition_at(int a[], int x)
    {
        int l = 0; 
        int u = x - 1;
        while (l <= u) {
            int m = (l + u) / 2;
            if (a[m] == 0)
                l = m + 1;
            else if (a[m] == 1)
            {
                if (m == 0 || (m > 0 && a[m - 1] == 0))
                    return m;
                u = m - 1;
            }
        }
        return -1;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the sorted array : ");
        int c=0;
        for(int i =0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" of array : ");
            arr[i]=sc.nextInt();
        }
        if(transition_at(arr, arr.length)>= 0)
            System.out.println("Transition point is at " + transition_at(arr, arr.length));
        else
            System.out.println("There is't any transition point");

    }
}
