import java.util.Scanner;
class Day4q1
{
public static void main(String[] args)
 {
Scanner sc=new Scanner(System.in);
System.out.println("Enter a Number :");   //
int n=sc.nextInt();
System.out.print("Prime Factors are : " );
        for (int i = 2; i <= n; i++) {

            while (n % i == 0) {
                System.out.print(i + " ");
                n = n / i;
            }
        }

        if (n < 1) System.out.println(n);
    }

}