import java.util.*;
class ques2d20
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Entre string : ");
        String s=sc.next();
        Stack<Character> st=new Stack<Character>();
        boolean b=true;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='{' || s.charAt(i)=='[' || s.charAt(i)=='(')
            st.push(s.charAt(i));
            if(st.empty())
            {
                b=false;
                break;
            }
            if(s.charAt(i)==')')
                if(st.pop()!='(')
                {
                    b=false;
                    break;
                }
            if(s.charAt(i)==']')
                if(st.pop()!='[')
                {
                    b=false;
                    break;
                }
            if(s.charAt(i)=='}')
                if(st.pop()!='{')
                {
                    b=false;
                    break;
                }
        }
        System.out.println(b);
    }
}
