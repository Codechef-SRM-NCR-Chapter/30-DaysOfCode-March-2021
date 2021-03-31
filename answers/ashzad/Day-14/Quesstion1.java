import java.util.*;
public class substring
{
    public static String removeDup(String s)
    {
        if ( s.length() <= 1 ) 
        return s;
        if( s.substring(1,2).equals(s.substring(0,1)) ) 
        return removeDup(s.substring(1));
        else 
        return s.substring(0,1) + removeDup(s.substring(1));
    }
    public static void  main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String str=sc.nextLine();
        System.out.println("String after removing duplicates:");
        System.out.println(removeDup(str));
    }
}
