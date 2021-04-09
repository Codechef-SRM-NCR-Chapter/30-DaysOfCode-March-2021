import java.util.*;
class Reverse_element
{
	static Queue<Integer> queue;
    static void reverseElements(int k)
    {
        if (queue.isEmpty() == true || k > queue.size())
            return;
        if (k <= 0)
            return;
        Stack<Integer> stack = new Stack<Integer>();
        for (int i = 0; i < k; i++)
        {
            stack.push(queue.peek());
            queue.remove();
        }
        while (!stack.empty())
        {
            queue.add(stack.peek());
            stack.pop();
        }
        for (int i = 0; i < queue.size() - k; i++)
        {
            queue.add(queue.peek());
            queue.remove();
        }
    }
    static void Print()
    {
        while (!queue.isEmpty())
        {
            System.out.print(queue.peek() + " ");
            queue.remove();
        }
    }
    public static void main(String args[])
    {
        queue = new LinkedList<Integer>();
        Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of elements and k");
		int n=sc.nextInt();
		int k =sc.nextInt();
		System.out.println("Enter elements");
		for(int i=0;i<n;i++)
        queue.add(sc.nextInt());
        reverseElements(k);
        Print();
    }
}
