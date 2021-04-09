import java.util.*;
public class panagram 
{
    public static void main() 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String:");
        String str = sc.nextLine();
        boolean[] a = new boolean[26];
        int index = 0;
        int f = 1;
        for (int i = 0; i < str.length(); i++)
        {
            
             if( str.charAt(i) >= 'a' && str.charAt(i) <= 'z') 
             {
                index = str.charAt(i) - 'a';
            }
            a[index] = true;
        }
        for (int i = 0; i <= 25; i++) {
            if (a[i] == false)
                f = 0;
        }
        System.out.println("String: " + str);
        if (f == 1)
            System.out.print("The string is a panagram.");
        else
            System.out.print("The string is not a panagram.");
    }
}
