import java.util.*;
class shaurya
{
    public static int count( String s, int a)
    {
        int c=0;
        int n=Integer.valueOf(s);
        while(n>0)
        {
            if(n%10==a)
                c++;
            n=n/10;
        }
        return c;
    }
    public static String removeextra(String s)
    {
        int x,y;
        String s1="";
        for(x=0;x<s.length();x++)
        {
            if(s.charAt(x)==('4') || s.charAt(x)==('7'))
            {
                s1=s1+s.charAt(x);
            }
        }
        return s1;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        s=removeextra(s);
        if(s.length()<=0)
        {
            System.out.println("-1");
        }
        else
        {
            if(count(s, 4)>count(s, 7))
            System.out.println("4");
            if(count(s, 4)<count(s, 7))
            System.out.println("7");
            if(count(s, 4)==count(s, 7))
            {
                System.out.println("4");
            }
        }
    }
}
