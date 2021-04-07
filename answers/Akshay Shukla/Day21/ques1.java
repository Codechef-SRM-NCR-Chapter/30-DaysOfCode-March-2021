import java.util.*;
class ques1d21
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter String S : ");
        String s=sc.nextLine();
        Stack st=new Stack();
        for(int i=0;i<s.length();i++)
        st.push(s.charAt(i));
        s="";
        while(!st.empty())
        s=s+st.pop();
        System.out.println("OUTPUT : S = "+s);
    }
}
