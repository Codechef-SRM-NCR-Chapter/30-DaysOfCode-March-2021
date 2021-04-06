import java.util.*;
public class Question_39
{
    static boolean check_bracs(String s)
    {
        Deque<Character> stack
                = new ArrayDeque<>();

        for (int i = 0; i < s.length(); i++)
        {
            char x = s.charAt(i);
            if (x == '(' || x == '[' || x == '{')
            {
                stack.push(x);
                continue;
            }
            if (stack.isEmpty())
                return false;
            char check;
            switch (x) {
                case ')':
                    check = stack.pop();
                    if (check == '{' || check == '[')
                        return false;
                    break;

                case '}':
                    check = stack.pop();
                    if (check == '(' || check == '[')
                        return false;
                    break;

                case ']':
                    check = stack.pop();
                    if (check == '(' || check == '{')
                        return false;
                    break;
            }
        }
        return (stack.isEmpty());
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the expression.");
        String str = sc.next();;
        if (check_bracs(str))
            System.out.println("True ");
        else
            System.out.println("False ");
    }
}
