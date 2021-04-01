import java.util.*;
class shaurya
{
    public static String reverse(String s,String s1,String s2,int n)
    {
        if(n==s.length())
        {
            return s2;
        }
        else
        {
            if(s.charAt(n)!=32)
            {
                char ch=s.charAt(n);
                s1=s1+ch;
                return(reverse(s, s1, s2, n+1));
            }
            else
            {
                s2=" "+s1+s2;
                s1="";
                return(reverse(s, s1, s2, n+1));
            }
        }
    }
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string ");
        String s=sc.nextLine();
        String sfinal=reverse(s+" ","","",0);
        System.out.println(sfinal);
    }
}
