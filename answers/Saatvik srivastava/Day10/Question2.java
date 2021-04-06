import java.util.Scanner;
public class Day10q2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the sentence  ");
        String str = sc.next();
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (Character.isUpperCase(str.charAt(i)))
            {
                count++;
                System.out.print("\n"+str.charAt(i));
                continue;
            }
            System.out.print(str.charAt(i));
        }
        System.out.println("\n"+ (count+1));

    }
}
