import java.util.*;
class Question_2
{
    static int Bit_counting(int x)
    {
        int c = 0;
        while (x > 0)
        {
            if ((x & 1) > 0)
                c+= 1;
            x = x >> 1;
        }
        return c;
    }
    static void insertion_sort(int arr[], int aux[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int i1=aux[i];
            int i2=arr[i];
            int j=i-1;
            while (j >= 0 && aux[j] < i1)
            {
                aux[j + 1]=aux[j];
                arr[j + 1]=arr[j];
                j-=1;
            }
            aux[j+1] = i1;
            arr[j+1] = i2;
        }
    }
    static void sort_by_set_bit_count(int arr[], int n)
    {
        int aux[] = new int[n];
        for (int i = 0; i < n; i++)
            aux[i] = Bit_counting(arr[i]);
        insertion_sort(arr, aux, n);
    }
    static void array_print(int arr[], int n)
    {
        for (int i = 0; i < n-1; i++)
            System.out.print(arr[i] + ", ");
        System.out.print(arr[n-1] + ".");
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
        sort_by_set_bit_count(arr, n);
        array_print(arr, n);
    }
}
