import java.util.Scanner;
class Question_1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();
        int s = 0, c, x=0;
        for (c = 1; c <= n; c++)
        {
            s = s * 10 + c;
            System.out.print(s + "+");
            x=x+s;
        }
        System.out.print("="+x);
    }
}
