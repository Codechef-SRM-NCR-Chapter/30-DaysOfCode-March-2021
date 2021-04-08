import java.util.*;
class ques2d22
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of queue : ");
        int n=sc.nextInt(); 
        System.out.print("Enter integer k : ");
        int k=sc.nextInt();
        System.out.println("Enter queue : ");
        Queue<Integer> q= new LinkedList<Integer>();
        Stack<Integer> st=new Stack<Integer>();
        for (int i=0;i<n;i++)
            q.add(sc.nextInt());
        for (int i=1;i<=k;i++)
            st.add(q.remove());
        for (int i=1;i<=k;i++)
            q.add(st.pop());
        for (int i=k+1;i<=n;i++)
        {
            int z=q.remove();
            q.add(z);
        }
        System.out.println("OUTPUT : "+q);
    }
}
