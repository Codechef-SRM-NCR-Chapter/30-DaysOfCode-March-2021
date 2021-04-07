import java.util.*;
class shaurya
{
    static int n,sp=-1;
    static char[] arr;
    public static void push(char ch)
    {
        sp=sp+1;
        arr[sp]=ch;
    }
    public static char pop()
    {
        int num=sp;
        sp=sp-1;
        return arr[num];
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        // arr=s.toCharArray();
        arr=new char[s.length()];
        for(int x=0;x<s.length();x++)
        push(s.charAt(x));
        for(int x=0;x<s.length();x++)
        System.out.print(pop());
    }
}
