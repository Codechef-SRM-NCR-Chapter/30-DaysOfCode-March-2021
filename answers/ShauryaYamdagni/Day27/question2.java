import java.util.*;
class shaurya
{
    public static int acount(String s)
    {
        int count =0;
        for(int x=0;x<s.length();x++)
        if(s.charAt(x)=='a')
        count++;
        return count;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int l=sc.nextInt();
        while(l>s.length())
        s=s+s;
        System.out.println(acount(s));
    }
}
