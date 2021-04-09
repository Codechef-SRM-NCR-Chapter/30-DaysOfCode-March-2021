import java.util.*;
class ques2d23alt
{
    static void nth(Deque dq,int n)
    {
        if(n==1)
        {
            dq.add(1);
            return;
        }
        else if(n==2)
        {
            dq.add(2);
            return;
        }
        else if(n%2==0)
        {
            dq.add(2);
            nth(dq,(n/2)-1);
        }
        else
        {
            dq.add(1);
            nth(dq,n/2);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter integer n : ");
        int n[]=new int[t];
        Deque<Integer> dq=new LinkedList<Integer>();
        for(int i=0;i<t;i++)
            n[i]=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            nth(dq,n[i]);
            int l=dq.size();
            for(int j=0;j<l;j++)
            System.out.print(dq.removeLast());
            System.out.println();
        }
    }
}
