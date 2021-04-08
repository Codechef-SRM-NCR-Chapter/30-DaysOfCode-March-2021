import java.util.*;
class minimize
{
	static void Print_Stack(Stack<Character> s)
	{
            if (s.isEmpty())
            return;
            char x = s.peek();
            s.pop();
            Print_Stack(s);
            System.out.print(x);
            s.add(x);
    }
    static void min_String(String s)
    {
		Stack<Character> Stack = new Stack<Character>();
		Stack.add(s.charAt(0));
		for (int i = 1; i < s.length(); i++)
		{
			if (Stack.isEmpty())
			{
				Stack.add(s.charAt(i));
			}
			else
			{
				if (Stack.peek() == s.charAt(i))
				{
					Stack.pop();
        }
        else
        {
          Stack.push(s.charAt(i));
        }
			}
        }
        Print_Stack(Stack);
    }
    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String s=sc.nextLine();
		min_String(s);
	}
}
