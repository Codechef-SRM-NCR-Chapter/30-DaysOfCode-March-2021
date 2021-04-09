import java.util.*;
class Question_1
{
    static Scanner sc = new Scanner(System.in);
    public static boolean Pangram_checking(String s)
    {
        boolean[] flag = new boolean[26];
        int pos = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if ('A' <= s.charAt(i) && s.charAt(i) <= 'Z')
                pos = s.charAt(i) - 'A';
            else if ('a' <= s.charAt(i) && s.charAt(i) <= 'z')
                pos = s.charAt(i) - 'a';
            else
                continue;
            flag[pos] = true;
        }
        for (int i = 0; i <= 25; i++)
            if (flag[i] == false)
                return (false);
        return (true);
    }
    public static void main(String[] args)
    {
        System.out.println("Enter the string you wanna check : ");
        String s = sc.nextLine();
        if (Pangram_checking(s) == true)
            System.out.print("Panagram exists");
        else
            System.out.print("Pangram doesn't exist");
    }
}
