import java.util.*;
class TestClass
{
    public static void main() 
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String arr[] = new String[n];
        s.nextLine();
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextLine();
        }
        for (int i = 0; i < n; i++) {
            System.out.println(removeEvenSubString(arr[i]));
        }
    }

    static String removeEvenSubString(String s)
    {
        Stack<Character> stc = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (stc.isEmpty()) {
                stc.push(s.charAt(i));
            } else if (stc.peek().equals(s.charAt(i))) {
                stc.pop();
            } else {
                stc.push(s.charAt(i));
            }

        }
        String out = "";
        if (stc.isEmpty()) {
            out="-1";
        } else {
            while (!stc.isEmpty()) {
                out = stc.pop() + out;
            }
        }
        return out;

    }
}
