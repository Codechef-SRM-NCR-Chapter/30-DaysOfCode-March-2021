import java.util.*;

class shaurya {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms you want to print");
        int n = sc.nextInt();
        int x, f;
        for (x = 1; x <= n; x++) {
            f = (x * x * x) + (x * 2);
            System.out.print(f + ",");
        }
    }

}
