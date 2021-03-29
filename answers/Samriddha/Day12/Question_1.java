import java.util.*;
public class Question_1
{
    static Scanner sc=new Scanner(System.in);
    static int n,m; static String ch; static char arr[][];
    public void get_value()
    {
        System.out.print("Enter the length of the character : ");
        n=sc.nextInt();
        System.out.print("Enter the no. of operations on the character : ");
        m=sc.nextInt();
        arr=new char[m][3];
        System.out.print("Enter the character of length "+n+" : ");
        ch=sc.next();
        for(int i = 0;i<m;i++)
        {
            System.out.println("Enter the operation no. "+(i+1)+" on the character by clicking enter after each entry : ");
            for(int j=0;j<3;j++)
                arr[i][j]=sc.next().charAt(0);

        }
    }
    public static void main(String args[])
    {
        Question_1 obj=new Question_1();
        obj.get_value();
        for(int i = 0;i<m;i++)
        {
            if (arr[i][0] == '2')
            {
                String s1=ch.substring((((int)arr[i][1])-49),(((int)arr[i][2])-48));
                if (ifPalindrome(s1)==true)
                {
                    System.out.print("YES    ");
                    System.out.println(ch);
                }
                else
                {
                    System.out.print("NO     ");
                    System.out.println(ch);}
            }
           else if (arr[i][0] == '1')
                obj.swap(((int)arr[i][1]-49), arr[i][2]);
           else
               System.out.print("The first entry of operation no. "+(i+1)+" should be either 1 or 2");
        }
    }
    static boolean ifPalindrome(String str)
    {
        int i = 0;
        int j = str.length() - 1;
        while (i < j)
        {
            if (str.charAt(i) != str.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
    }
    static void swap(int j, char x)
    {
        String str="";
        for(int i=0;i<ch.length();i++)
        {
            if(i==j)
                str=str+x;
            else
                str=str+ ch.charAt(i);
        }
        ch=str;
    }
}
