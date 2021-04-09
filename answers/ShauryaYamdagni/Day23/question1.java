import java.util.*;
class shaurya
{
    static int n,sp=-1;
    static String[] arr;
    public static void push(String s)
    {
        sp=sp+1;
        arr[sp]=s;
    }
    public static String pop()
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
        s=s+" ";
        int x,y=0,z;
        String s1="";
        for(x=0;x<s.length();x++)
        if(s.charAt(x)==32)
        y++;
        arr=new String[y];
        // System.out.println(s);
        for(x=0;x<s.length();x++)
        {
            if(s.charAt(x)!=32)
            {
                s1=s1+s.charAt(x);
            }
            else
            {
                push(s1);
                s1="";
            }
        }
        for(x=0;x<arr.length;x++)
        {
            System.out.print(pop()+" ");
        }
    }
}
