import java.util.*;
class ques1d15
{
    static String rev(String s,String r,int i,int j)
    {
        if(j==s.length())
        {
            r=s.substring(i,j)+" "+r;
            return r;
        }
        if(s.charAt(j)==' ')
        {
            r=s.substring(i,j)+" "+r;
            return rev(s,r,j+1,j+1);
        }
        else
        return rev(s,r,i,j+1);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter String");
        String s=sc.nextLine();
        String r="";
        System.out.println(rev(s,r,0,0));
    }
}
