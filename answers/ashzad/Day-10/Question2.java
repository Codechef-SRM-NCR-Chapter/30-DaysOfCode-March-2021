import java.util.*;
public class CamelCase {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String:");
        String str=sc.nextLine();
        //String str="JavaScript";
        int c=0,i;
        for(i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                System.out.println();
                System.out.print(str.charAt(i));
                c++;
            }
            else
                System.out.print(str.charAt(i));
        }
        System.out.println();
        System.out.println(c);

    }
}
