import java.util.*;
class shaurya
{
static void PrintStack(Stack<Character> s)
{
	if (s.isEmpty())
		System.out.println("-1");
	char x = s.peek();
	s.pop();
	PrintStack(s);
	System.out.print(x);
	s.add(x);
}
static void minString(String s)
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
	PrintStack(Stack);
}
public static void main(String[] args)
{
    Scanner sc=new Scanner(System.in);
	String str = sc.nextLine();
	minString(str);
}
}
