import java.util.*;
public class Remove
{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a = sc.nextInt();
        int arr[]=new int[a];
        for(int i=0;i<a;i++)
            arr[i]=sc.nextInt();
        removeduplicate(arr);
    }

    public static void removeduplicate(int a[]) {
        Stack<Integer> stack = new Stack<>();
        stack.push(a[0]);
        for(int i=1;i<a.length;i++)
        {
            int x=a[i];
            if(stack.peek()==x)
                continue;
            else
                stack.push(a[i]);
        }
        System.out.print(stack);
    }
}
