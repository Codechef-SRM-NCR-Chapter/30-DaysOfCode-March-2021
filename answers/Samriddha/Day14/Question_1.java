import java.util.*;
class Question_1
{
    static String str_operation(char[] chars)
    {
        char p = '\0';
        int c = 0;
        for (char ch: chars)
        {
            if (p != ch)
            {
                chars[c++] = ch;
                p = ch;
            }
        }
        return new String(chars).substring(0, c);
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the String : ");
        String s = sc.next();
        s = str_operation(s.toCharArray());
        System.out.println(s);
    }
}
