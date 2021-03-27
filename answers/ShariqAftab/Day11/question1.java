import java.util.*;
public class CanBePalindrome {
    static int nchar = 256;
    public static boolean canFormPalindrome(String str)
    {
        int[] count = new int[nchar];
        for (int i = 0; i < str.length(); i++)
            count[str.charAt(i)]++;
        int odd = 0;
        for (int i = 0; i < nchar; i++) {
            if ((count[i] & 1) != 0)
                odd++;
            if (odd > 1)
                return false;
        }
        return true;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the test String ");
        String s=sc.nextLine();
        if(canFormPalindrome(s)==true)
            System.out.println("yes");
        else
            System.out.println("No");
    }
}
