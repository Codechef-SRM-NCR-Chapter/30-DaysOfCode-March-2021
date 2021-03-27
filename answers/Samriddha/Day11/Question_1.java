import java.util.*;
public class Question_1
{
    static Scanner sc=new Scanner(System.in);
    static int f = 0;
    public static void main(String[] args)
    {
        System.out.print("Enter the string : ");
        String str = sc.next();
        int n = str.length();
        Question_1 obj = new Question_1();
        obj.permuting(str, 0, n-1);
        if(f==0)
            System.out.println("NO");
    }
    void permuting(String str, int l, int r)
    {
        f = 0;
        if (l == r)
        {
            if(if_palindrome(str)==true)
            {
                System.out.println("YES");
                f=1;
                System.exit(0);

            }
        }
        else
        {
            for (int i = l; i <= r; i++)
            {
                str = swap(str,l,i);
                permuting(str, l+1, r);
                str = swap(str,l,i);
            }
        }
    }
    boolean if_palindrome(String a)
    {
        String b = "";
        int n = a.length();
        for (int i = n - 1; i >= 0; i--)
        {
            b = b + a.charAt(i);
        }
        if (a.equalsIgnoreCase(b)) {
            return true;
        } else {
            return false;
        }
    }
    public String swap(String a, int i, int j)
    {
        char temp;
        char[] c = a.toCharArray();
        temp = c[i] ;
        c[i] = c[j];
        c[j] = temp;
        return String.valueOf(c);
    }

}
