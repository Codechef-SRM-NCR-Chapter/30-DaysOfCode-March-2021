import java.util.*;
class stack_reverse
{
    int size;
    int top;
    char[] a;
    boolean isEmpty()
    {
        return (top < 0);
    }

    stack_reverse(int n)
    {
        top = -1;
        size = n;
        a = new char[size];
    }
    boolean push(char x)
    {
        if (top >= size)
        {
			System.out.println("Stack Overflow");
			return false;
        }
        else
        {
            a[++top] = x;
            return true;
        }
    }
    char pop()
    {
        if (top < 0)
        {
        System.out.println("Stack Underflow");
        return 0;
        }
        else
        {
            char x = a[top--];
            return x;
        }
	}
    public static void main(String args[])
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String s=sc.nextLine();
        int n = s.length();
		String r="";
        stack_reverse obj = new stack_reverse(n);
        for (int i = 0; i < n; i++)
        obj.push(s.charAt(i));
		for (int i = 0; i < n; i++)
		{
		    char ch = obj.pop();
		    r=r+ch;
		}
        System.out.println("Reversed string is: " + r);
    }
}
