import java.util.*;
public class Question_1 {
    static int max, n, arr[];

    public static void main(String args[]) {
        Question_1 obj = new Question_1();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of array : ");
        n = sc.nextInt();
        arr = new int[n];
        System.out.println("Enter the elements of the unsorted array : ");
        for (int i = 0; i < n; i++) {
            System.out.print("Enter element no." + (i + 1) + " of array : ");
            arr[i] = sc.nextInt();
        }
        obj.printRepeating();
        obj.missing();

    }
    static void printRepeating() {

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == (arr[j])) {
                    System.out.print(arr[j] + " ");
                }
            }

        }
        
    }
    static void missing()
    {
        Arrays.sort(arr);
        for(int i=1;i<arr[n - 1];i++)
        {
            for(int j=i-1;j<n;j++)
            {
                if (arr[j] == (i-1))
                    continue;
                else if(arr[j] == i)
                    break;
                else
                {
                    System.out.print(i);
                    System.exit(0);
                }

            }

        }
    }
}
