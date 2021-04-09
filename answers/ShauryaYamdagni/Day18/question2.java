import java.util.*;

class shaurya {
    public static int binarycount(int n) {
        int c = 0, a, k = 0;
        while (n > 0) {
            a = n % 2;
            k = k + (int) (a * (Math.pow(10, c)));
            c++;
            n = (int) n / 2;
        }
        c = 0;
        String s = Integer.toString(k);
        for (a = 0; a < s.length(); a++) {
            if (s.charAt(a) == '1')
                c++;
        }
        return c;
    }

    public static void main(String srg[]) {
        Scanner sc = new Scanner(System.in);
        int x, y, z;
        System.out.println("Enter the length of array");
        int n = sc.nextInt();
        int[] arr = new int[n];
        int[] cofone = new int[n];
        for (x = 0; x < n; x++) {
            arr[x] = sc.nextInt();
            cofone[x] = binarycount(arr[x]);
        }
        int flag, t1, t2;
        for (x = 0; x < n - 1; x++) {
            flag = x;
            for (y = x + 1; y < n - 1; y++) {
                if (cofone[flag] < cofone[y]) {
                    flag = y;
                }
            }

            t1 = cofone[flag];
            t2 = arr[flag];
            while (flag > x) {
                cofone[flag] = cofone[flag - 1];
                arr[flag] = arr[flag - 1];
                flag--;
            }
            // arr[x] = arr[flag];
            arr[x] = t2;
            // cofone[x] = cofone[flag];
            cofone[x] = t1;
        }
        for (x = 0; x < n; x++)
            System.out.println(arr[x]);
    }
}
