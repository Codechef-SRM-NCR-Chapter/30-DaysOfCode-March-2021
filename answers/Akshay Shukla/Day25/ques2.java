import java.util.*;
class ques2d25
{
    static int move(int x,int y,int m,int n,int c)
    {
        if(x>m || y>n)
            return 100000;
        if(x==m && y==n)
            return c;
        int p=move(x+1,y,m,n,c+1);
        int d=move(x+1,y+1,m,n,c+1);
        return Math.min(p,d);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter destination as x y : ");
        sc.nextLine();
        int m[]=new int[t];
        int n[]=new int[t];
        ArrayList<Integer> a=new ArrayList<Integer>();
        for(int i=0;i<t;i++)
        {
            String s=sc.nextLine();
            m[i]=Integer.valueOf(String.valueOf(s.charAt(0)));
            n[i]=Integer.valueOf(String.valueOf(s.charAt(2)));
        }
        for(int i=0;i<t;i++)
        {
            if(move(0,0,m[i],n[i],0)==100000)
            System.out.println("Cannot reach destination");
            else
            System.out.println(move(0,0,m[i],n[i],0));
        }
    }
}
