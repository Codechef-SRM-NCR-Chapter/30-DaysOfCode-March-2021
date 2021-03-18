import java.util.Scanner;
class Question_4
{
    int no;
    int s;

    Question_4(int nn)
    {
        no = nn;
        s = 0;
    }

    void DigitCounting()
    {
        int l = (""+no).length();
        s = l;
    }

    int sumofdigits(int n, int p)
    {
        if(n==0)
            return 0;
        else
            return (int)Math.pow((n%10),p) + sumofdigits((n/10), p-1);
    }

    void FinalCheck()
    {
        if(no == sumofdigits(no, s))
            System.out.println(no + " is a Disarium Number!");
        else
            System.out.println(no + " is not a Disarium Number!");
    }

    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a number of your choice : ");
        int x = in.nextInt();
        Question_4 obj = new Question_4(x);
        obj.DigitCounting();
        obj.FinalCheck();
    }
}
