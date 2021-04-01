import java.util.*;

public class StringReverse
{  
    public static String reverseS(String str)
    {
        if (str.isEmpty())
            return str;
        return reverseS(str.substring(1)) + str.charAt(0);
    }
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enetr the string:");
        String str=sc.nextLine();
        System.out.println("Output:");
        System.out.println(reverseS(str));
    }
    
}
