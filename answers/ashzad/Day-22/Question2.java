import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;
import java.util.*;

public class ReverseQUEUE
{
    static Queue<Integer> queue;
    static void reverse(int k)
    {
        if (queue.isEmpty() == true
            || k > queue.size())
            return;
        if (k <= 0)
            return;
 
        Stack<Integer> stack = new Stack<Integer>();
        for (int i = 0; i < k; i++) 
        {
            stack.push(queue.peek());
            queue.remove();
        }
        while (!stack.empty()) {
            queue.add(stack.peek());
            stack.pop();
        }
        for (int i = 0; i < queue.size() - k; i++) {
            queue.add(queue.peek());
            queue.remove();
        }
    }
    static void Print()
    {
        while (!queue.isEmpty()) {
            System.out.print(queue.peek() + " ");
            queue.remove();
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        queue = new LinkedList<Integer>();
        System.out.println("Enter the size of the queue:");
        int n=sc.nextInt();
        System.out.println("Enter the values in the Queue:");
        for(int i=0;i<n;i++)
        {
            int s=sc.nextInt();
            queue.add(s);
        }
        System.out.println("Enter value of k:");
        int k = sc.nextInt();
        System.out.println("Output:");
        reverse(k);
        Print();
    }
}
