import java.util.*;
class reverse_stringword
{
       static void reverse(String str)
       {
		   Stack<String> st = new Stack<String>();
		   String[] ss = str.split(" ");
		   for (String temp : ss)
           {
			   st.add(temp);
           }
           while (!st.isEmpty())
           {
               System.out.print(st.peek() + " ");
               st.pop();
           }
    }

    public static void main (String args[])
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String str =sc.nextLine();
        reverse(str);
  }
}
