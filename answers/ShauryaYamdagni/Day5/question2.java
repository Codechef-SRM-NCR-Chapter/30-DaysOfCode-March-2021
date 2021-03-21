import java.util.*;

class shaurya {
    public static boolean primecheck(int n) {
        int x, y = 0;
        for (x = 1; x <= n; x++)
            if (n % x == 0)
                y++;
        if (y == 2)
            return (true);
        else
            return (false);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of rows you wanna print");
        int n = sc.nextInt();
        int x, y, z = 1, l;
        for (x = 0; x < n; x++) {
            for (y = 0; y <= x; y++) {
                if (primecheck(z))
                    System.out.print("#  ");
                else
                    System.out.print("*  ");
                z++;
            }
            System.out.println();
        }
    }
}
