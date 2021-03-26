import java.util.Scanner;
public class Question_2 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the CamelCased sentence : ");
        String s = sc.next();
        int c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (Character.isUpperCase(s.charAt(i)))
            {
                c++;
                System.out.print("\n"+s.charAt(i));
                continue;
            }
            System.out.print(s.charAt(i));
        }
        System.out.println("\n"+ (c+1));

    }
}
