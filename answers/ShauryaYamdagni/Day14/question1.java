import java.util.Scanner;
class shaurya
{
    public static String duplicate(String s,String s1,char c,int n)
    {
        if(n==(s.length()))
        {
            return(s1);
        }
        else
        {
            if(c!=s.charAt(n))
            {
                s1=s1+s.charAt(n);
                // System.out.println(n);
                return(duplicate(s, s1, s.charAt(n), n+1));
            }
            else
            {
                // System.out.println(n);
                return(duplicate(s, s1, s.charAt(n), n+1));
            }
        }
    }
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        String ss=duplicate(s,"",s.charAt(0),1);
        System.out .println(s.charAt(0)+ss);
    }
}
