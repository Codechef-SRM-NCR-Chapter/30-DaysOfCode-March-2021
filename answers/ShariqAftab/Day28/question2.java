import java.util.*;
class EqualSum
{
     public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number:");
        int N =sc.nextInt();
        SUM(N);
    }
    public static void SUM(int N)
    {
        if (N <= 2)
        {
            System.out.print("-1");
            return;
        }
        int value = (N * (N + 1)) / 2;
        if(value%2!=0)
        {
            System.out.print("No");
            return;
        }
        Vector<Integer> v1 = new Vector<Integer>();
        Vector<Integer> v2 = new Vector<Integer>();
        if (N%2== 0)
        {
            int turn = 1;
            int start = 1;
            int last = N;
            while (start < last)
            {
                if (turn == 1)
                {
                    v1.add(start);
                    v1.add(last);
                    turn = 0;
                }
                else
                {
                    v2.add(start);
                    v2.add(last);
                    turn = 1;
                }
                start++;
                last--;
            }
        }
        else
        {
            int rem = value / 2;
            boolean[] vis = new boolean[N + 1];
            for(int i = 1; i <= N; i++)
                vis[i] = false;

            vis[0] = true;
            for(int i = N; i >= 1; i--)
            {
                if (rem > i)
                {
                    v1.add(i);
                    vis[i] = true;
                    rem -= i;
                }
                else
                {
                    v1.add(rem);
                    vis[rem] = true;
                    break;
                }
            }
            for(int i = 1; i <= N; i++)
            {
                if (!vis[i])
                    v2.add(i);
            }
        }
        System.out.print("Size of subset 1 is: ");
        System.out.println(v1.size());
        System.out.print("Elements of the subset are: ");
        for(Integer c : v1)    
            System.out.print(c + " ");
        System.out.println();
        System.out.print("Size of subset 2 is: ");
        System.out.println(v2.size());
        System.out.print("Elements of the subset are: ");
        for(Integer c : v2)    
            System.out.print(c + " ");
    }
 
}
