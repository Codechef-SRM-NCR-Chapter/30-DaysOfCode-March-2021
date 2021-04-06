import java.util.*;
class ques1d20
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter cases : ");
        ArrayList<Integer> n=new ArrayList<Integer>(t);
        for(int i=0;i<t;i++)
        n.add(sc.nextInt());
        Stack<Integer> st=new Stack<Integer>();
        for(int i=0;i<t;i++)
        {
            int m=n.get(i);
            st.push(m%10);
            m=m/10;
            while(m>0)
            {
                if(st.peek()!=(m%10))
                st.push(m%10);
                m=m/10;
            }
            while(!st.empty())
            System.out.print(st.pop());
            System.out.println();
        }
    }
}
