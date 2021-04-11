import java.util.*;
class ques1d25
{
    static int move(int m,int x,int y,ArrayList<Integer> a)
    {
        if(m==0)
        {
            int i=0;
            for(i=0;i<a.size();i++)
            if(x==(int)a.get(i))
            break;
            if(i==a.size())
            {
                a.add(x);
                return (Math.abs(x)+Math.abs(y));
            }
            else
            return 0;
        }
        int p=move(m-1,x+1,y,a);
        int n=move(m-1,x-1,y,a);
        int r=move(m-1,x,y,a);
        return p+n+r;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter no. of moves : ");
        int m[]=new int[t];
        ArrayList<Integer> a=new ArrayList<Integer>();
        for(int i=0;i<t;i++)
        {
            m[i]=sc.nextInt();
        }
        for(int i=0;i<t;i++)
        {
            System.out.println(move(m[i],0,0,a));
            /*           OR
           System.out.println(2*m[i])*/
        }
    }
}
