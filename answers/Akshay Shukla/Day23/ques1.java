import java.util.*;
class ques1d23
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String : ");
        String str=" "+sc.nextLine();
        Stack<Character> st=new Stack<Character>();
        for(int i=0;i<str.length();i++)
        st.push(str.charAt(i));
        String s1="",s2="";
        while(!st.empty())
        {
            if(st.peek()==' ')
            {
                s2=s2+s1+st.pop();
                s1="";
            }
            else
            s1=st.pop()+s1;
        }
        System.out.println("OUTPUT : "+s2);
    }
}
