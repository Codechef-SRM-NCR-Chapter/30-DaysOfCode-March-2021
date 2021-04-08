import java.util.*;
class shaurya
{
    public static int remove(int n)
    {
        String s=Integer.toString(n),s1="";
        for(int x=0;x<s.length()-1;x++)
        {
            if(s.charAt(x)!=s.charAt(x+1))
                s1=s1+s.charAt(x);
        }
        return Integer.valueOf(s1+(s.charAt(s.length()-1))) ;
    }
    public static void main(String srgs[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the nummer of test cases");
        int n=sc.nextInt();
        for(int x=0;x<n;x++)
        {
            System.out.println("enter the value you wanna print");
            System.out.println(remove(sc.nextInt()));
        }
    }
}
