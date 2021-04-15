import java.util.*;
public class RevStack
{
    public static void main()
    {
        Stack<String> st=new Stack<>();
        Scanner sc= new Scanner (System.in);
        String str=sc.nextLine();
        str=str+" ";
        int l=str.length();
        String w="";
        int i=0;
        while(l-->0)
        {
            char a=str.charAt(i);
            if(a==' ')
            {
                st.add(w);
                w="";
            }
            else
            {
                w+=a;
            }
            i++;
        }
        l=st.size();
        while(l-->0)
        {
            System.out.print(st.pop()+" ");
        }
    }
}
