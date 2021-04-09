import java.util.*;
class shaurya {
    public static double countSquares(int a, int b) {
        return (Math.floor(Math.sqrt(b - 1)) - Math.ceil(Math.sqrt(a)) + 1);
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number");
        System.out.println((int) countSquares(1, sc.nextInt()));
    }
}
