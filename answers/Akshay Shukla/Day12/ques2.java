import java.util.*;
class ques2d12
{
    public static int check(String s,int l)
    {
        int f=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(s.substring(i,j+1).endsWith("1") && s.substring(i,j+1).startsWith("1"))
                    f++;
            }
        }
        return f;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no. of test cases");
        int t=sc.nextInt();
        int l[]=new int[t];
        String s[]=new String[t];
        System.out.println("Enter length of strings and strings");
        for(int i=0;i<t;i++)
        {
            l[i]=sc.nextInt();
            s[i]=sc.next();
        }
        for(int i=0;i<t;i++)
        System.out.println(check(s[i],l[i]));
    }
}
