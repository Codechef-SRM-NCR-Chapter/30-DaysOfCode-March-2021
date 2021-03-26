import java.util.*;
public class Day10
{

    public static void main() 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String:");
        String str=sc.nextLine();
        sc.close();
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                System.out.println();
                System.out.print(str.charAt(i));
                count++;
            }
            else
                System.out.print(str.charAt(i));
        }
        System.out.println();
        System.out.println(count);

    }
}
