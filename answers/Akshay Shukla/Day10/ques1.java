import java.util.*;
class ques1d10
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a string");
        String s=sc.nextLine();
        int c=0;
        for(int i=65;i<=90;i++)
        {
            for(int j=0;j<s.length();j++)
            {
                if(s.charAt(j)==(char)i || s.charAt(j)==(char)(i+32))
                {
                    c++;
                    break;
                }
            }
        }
        if(c<26)
        System.out.println("PANGRAM DOESN'T EXIST");
        else
        System.out.println("PANGRAM EXIST");
    }
}
