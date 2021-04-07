import java.util.*;
public class ReverseString
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String:");
        String st=sc.nextLine();
        int size = st.length();
        Stack<Character> stack = new Stack<>();
        int i;
        for(i = 0; i < size; ++i) {
            stack.push(st.charAt(i));
        }
        st="";
        for(i = 0; i < size; ++i) {
             st =st+ stack.pop();
        }
        System.out.println(st);
    }
}
