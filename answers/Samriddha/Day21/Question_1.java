import java.util.*;
class Question_1
{
    int size;
    int top;
    char[] a;
    Question_41(int n)
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
            return a[top--];
        }
    }
}
class Question_1_main
{
    public static void reversed_string(StringBuffer s)
    {
        Question_1 obj = new Question_1(s.length());
        int i;
        for (i = 0; i < s.length(); i++)
            obj.push(s.charAt(i));
        for (i = 0; i < s.length(); i++)
        {
            char c = obj.pop();
            s.setCharAt(i,c);
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String : ");
        StringBuffer s= new StringBuffer(sc.next());
        reversed_string(s);
        System.out.println("The reversed String is : " + s);
    }
}
