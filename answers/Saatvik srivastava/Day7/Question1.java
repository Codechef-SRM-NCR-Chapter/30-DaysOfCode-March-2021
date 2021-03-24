import java.util.*;
class Day7q1
{
    static int arr1[];
    static int arr2[];
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of two array ");
        int n = sc.nextInt();
        arr1 = new int[n];
        arr2= new int[n];
        for(int i = 0;i<n;i++)
        {
            System.out.println("Enter " + (i+1) + " for arr1 array");
            arr1[i]=sc.nextInt();
            System.out.println("Enter " + (i+1) + " for arr2 array");
            arr2[i]=sc.nextInt();
        }        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(arr1[i], arr2[i]);
        }
        int[] ans = new int[list.size()];
        System.out.print("O/P : [");
        for (int i = 0; i < list.size()-1; i++)
        {
            ans[i] = list.get(i);
            System.out.print(ans[i]+", ");
        }
        System.out.print(list.get(list.size()-1)+"]");
    }
}
