import java.util.*;

public class BalacedBrackets {
    
    public static char pair(char c) {
        if(c=='}') {
            return '{';
        }
        else if(c==')') {
            return '(';
        }
        else {
            return '[';
        }
    }
    
    public static boolean checkBalanced(String str) {
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<str.length();i++) {
            char c = str.charAt(i);
            if( c=='{' || c=='(' || c=='[' ) {
                stack.push(c);
            }
            else if( c=='}' || c==')' || c==']' ) {
                
                if(stack.isEmpty()) {
                    return false;
                }
                
                if(  pair(c) ==stack.peek() ) {
                    stack.pop();
                }
                else {
                    return false;
                }
                
            }
            
            
        }
        if(stack.isEmpty()) {
            return true;
        }
        return false;

    }
    
    
        public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        
        String string = sc.nextLine();
        System.out.println(
                checkBalanced(string)
                );
    }

}
