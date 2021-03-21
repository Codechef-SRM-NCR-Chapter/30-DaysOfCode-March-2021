import java.util.*;

class shaurya {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number terms you wanna print");
        long n = sc.nextInt();
        long a = 0, b = 1, c, x;
        System.out.print(a + "," + b + ",");
        for (x = 2; x <= n; x++) {
            c = a + b;
            System.out.print((c) + ",");
            a = b;
            b = c;
        }
    }
}
