import java.util.*;
class ques1d26
{
    static void prime(int n,ArrayList<Integer> p,ArrayList<Integer> con)
    {
        int c=0;
        for(int i=2;i<n;i++)
        if(n%i==0)
        {
            c++;
            break;
        }
        if(c==0)
        p.add(n);
        else
        con.add(n);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter range as x y : ");
        sc.nextLine();
        int m[]=new int[t];
        int n[]=new int[t];
        ArrayList<Integer> p=new ArrayList<Integer>();
        ArrayList<Integer> con=new ArrayList<Integer>();
        for(int i=0;i<t;i++)
        {
            String s=sc.nextLine();
            String[] arr=s.split(" ");
            m[i]=Integer.valueOf(arr[0]);                                              
            n[i]=Integer.valueOf(arr[1]);
        }
        for(int i=0;i<t;i++)
        {
            for(int j=m[i];j<=n[i];j++)
            prime(j,p,con);
            System.out.println(p.size()*con.size());
            p.clear();
            con.clear();
        }
    }
}
