import java.util.*;
class ques1d11
{
    static int palin(String s)
    {
        int a[]=new int[26];
        s=s.toUpperCase();
        for(int i=65;i<=90;i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if((int)s.charAt(j)==i)
                a[i-65]++;
            }
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]%2!=0)
            c++;
            if(c>1)
            return 0;
        }
        return 1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String ");
        String s=sc.next();
        if(palin(s)==1)
        System.out.println("YES");
        else
        System.out.println("NO");
    }
}
