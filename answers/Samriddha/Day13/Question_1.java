import java.util.*;
class Question_1
{
    static Scanner sc = new Scanner(System.in);
    static int sum_of_digits(int num)
    {
        if (num == 0)
            return 0;
        return (num % 10 + sum_of_digits(num / 10));
    }
    public static void main(String args[])
    {
        System.out.print("Enter the number : ");
        int num = sc.nextInt();
        int sum = sum_of_digits(num);
        System.out.println("Sum of digits in the " + num + " is " + sum);
    }
}
