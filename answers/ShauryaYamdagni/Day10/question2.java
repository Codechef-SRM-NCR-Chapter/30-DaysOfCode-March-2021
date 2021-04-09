import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the string ");
    String s=sc.nextLine();
    s=s+"S";
    int x,y,z,sum=0,start=0,end=0;
    for(x=1;x<s.length();x++)
    {
        char ch=s.charAt(x);
        if(Character.isUpperCase(ch))
        {
            sum++;
            end=x;
            String s1=s.substring(start,end);
        start=end;
        System.out.println(s1);
        }
        
    }
    System.out.println(sum);
    }
}
