import java.util.*;
class ques1d22
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Binary String");
        String s=sc.nextLine();
        Stack<Character> st=new Stack<Character>();
        int f=0;
        for(int i=1;i<s.length();i++)
        {
            st.add(s.charAt(0));
            for(int j=1;j<s.length();j++)
            {
                if(st.peek() == s.charAt(j))
                st.pop();
                else
                st.add(s.charAt(j));
            }
            if(st.empty())
            {
               System.out.println("OUTPUT : -1");
               f=1;
               break;
            }
            s="";
            while(!st.empty())
            s=st.pop()+s;
        }
        if(f==0)
        System.out.println("OUTPUT : "+s);
    }
}
