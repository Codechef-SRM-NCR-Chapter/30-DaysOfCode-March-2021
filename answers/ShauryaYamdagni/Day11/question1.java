import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        s=s.toUpperCase();
        String s3="",s4="",s5="";
        String s2="";
        int x,y,z;
        if(s.length()%2!=0)
        {
            System.out.println("NO");
        }
        else
        {
            for(x=0;x<26;x++)
            {
                char ch=(char)(x+65);
                for(y=0;y<s.length();y++)
                {
                    if(s.charAt(y)==ch)
                    {
                    s2=s2+s.charAt(y);
                    }
                }
            }
            // System.out.println(s2+"akakkaakak");
            for(x=0;x<s.length()-1;x=x+2)
            {
                char ch1=s2.charAt(x);
                char ch2=s2.charAt(x+1);
                s3=s3+ch1;
                s4=s4+ch1;
            }
            for(x=0;x<s.length()/2;x++)
            s5=s4.charAt(x)+s5;
            if(s3.equalsIgnoreCase(s4))
            System.out.println("YES"+" And the palindrome is  "+s3+s5);
            else
            System.out.println("NO");
        }

    }
}
