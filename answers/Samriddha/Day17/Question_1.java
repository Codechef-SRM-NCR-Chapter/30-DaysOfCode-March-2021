import java.util.*;
class Question_1
{
    static class pair {
        int first, second;
        public pair(int f, int s)
        {
            first = f;
            second = s;
        }
    }
    static void quadruple(int arr[], int n, int a)
    {
        HashMap<Integer, pair> mp = new HashMap();
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                mp.put(arr[i] + arr[j], new pair(i, j));
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int s = arr[i] + arr[j];
                if (mp.containsKey(a - s)) {
                    pair p = mp.get(a - s);
                    if (p.first != i && p.first != j && p.second != i && p.second != j) {
                        System.out.print(arr[i] + ", " + arr[j] + ", " + arr[p.first] + ", " + arr[p.second]);
                        return;
                    }
                }
            }
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        int n = sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the sorted array : ");
        for(int i =0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" of array : ");
            arr[i]=sc.nextInt();
        }
        System.out.print("Enter the number whose sum is to be calculated : ");
        int k = sc.nextInt();
        quadruple(arr, n, k);
    }
}
