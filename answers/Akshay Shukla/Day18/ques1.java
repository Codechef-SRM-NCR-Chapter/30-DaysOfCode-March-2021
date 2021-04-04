import java.util.*;
class ques1d18
{
    static int count(ArrayList<Integer> s,int n,int c)
    {
        for(int i=0;i<s.size();i++)
            if(s.get(i)<n)
            c++;
        return c;
    }
    static void ps(ArrayList<Integer> s,int n)
    {
        for(int i=1;i<=n;i++)
            s.add(i*i);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a no. n : ");
        int n=sc.nextInt();
        ArrayList<Integer> s=new ArrayList<Integer>();
        ps(s,1000);
        System.out.println(count(s,n,0));
    }
}
