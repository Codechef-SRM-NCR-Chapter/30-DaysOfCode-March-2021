import java.util.*;
class ques2d10
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        String s=sc.nextLine()+' ',s2="";
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(((int)ch>=65 && (int)ch<=90) || ch==' ')
            {
                System.out.println(s2);
                s2="";
                c++;
            }
            s2=s2+ch;
        }
        System.out.println(c-1);
    }
}
