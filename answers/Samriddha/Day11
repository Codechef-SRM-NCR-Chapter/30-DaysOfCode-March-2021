import java.util.*;
public class Question_2 {
    Scanner sc = new Scanner(System.in);
    static String s;
    static int n;
    static int c;
    static String arr[];

    public static void main(String args[]) {
        Question_2 obj = new Question_2();
        obj.get_data();
        for (int i = 0; i < c; i++) {
            System.out.println(occurence(s, arr[i]));
        }
    }
    void get_data() {
        System.out.print("Enter the String : ");
        s = sc.nextLine();
        n = s.length();
        System.out.print("Enter the count for patterns : ");
        c = sc.nextInt();
        arr = new String[c];
        for (int i = 0; i < c; i++) {
            System.out.print("Enter the String pattern no." + (i + 1) + " : ");
            arr[i] = sc.next();
        }
    }
    static int occurence(String s1, String s2)
    {
        if (s1.isEmpty() || s2.isEmpty()) {
            return 0;
        }
        int position = 0;
        int ctr = 0;
        int n = s2.length();
        while ((position = s1.indexOf(s2, position)) != -1) {
            position = position + n;
            ctr++;
        }
        return ctr;

    }
}
