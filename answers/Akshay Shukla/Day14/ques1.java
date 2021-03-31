import java.util.*;
class ques1d14
{
    static String dup(String s,int i,int j)
    {
        if(j==s.length())
        {
            s=s.substring(0,i)+s.charAt(i);
            return s;
        }
        if(s.charAt(i)==s.charAt(j))
        {
            return dup(s,i,j+1);
        }
        else
        {
            s=s.substring(0,i)+s.charAt(i)+s.substring(j);
            return dup(s,i+1,i+2);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String");
        String s=sc.next();
        System.out.println(dup(s,0,1));
    }
}
