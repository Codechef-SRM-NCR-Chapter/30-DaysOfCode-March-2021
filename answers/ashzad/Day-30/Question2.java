import java.util.*;
import java.io.*;
import java.lang.*;
import java.math.*;
public class DAY30Q1
{
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        String s = sc.next();
        int c1 = 0, c2 = 0;
        for (char i : s.toCharArray()) {
            if (i == '4') c1++;
            else if (i == '7') c2++;
        }

        if (c1 > c2 || (c1 == c2 && c1 != 0)) {
            System.out.println("4");
        } else if (c2 > c1) {
            System.out.println("7");
        } else {
            System.out.println("-1");
        }
    }

    static int swap(int a, int b) {
        return a;
    }

    static class pair {
        int first;
        int second;
        public pair(int first, int second) {
            this.first = first;
            this.second = second;
        }
    }

    public static long power(long a, long b) {
        long res = 1;
        while (b > 0) {
            if ((b & 1) != 0) {
                res = (res * a) % 1000000007;
            }
            a = (a * a) % 1000000007;
            b = b >> 1;
        }
        return res;
    }

    public static int pow(int a, int b) {
        int res = 1;
        while (b > 0) {
            if ((b & 1) != 0) {
                res = (res * a);
            }
            a = a * a;
            b = b >> 1;
        }
        return res;
    }

    public static String catoString(char[] ch) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < ch.length; i++) {
            sb.append(ch[i]);
        }
        return sb.toString();
    }

    public static boolean isPrime(long n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    public static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    public static long lcm(long a, long b) {
        long d = gcd(a, b);
        return (a * b) / d;
    }

    static boolean isPowerOfTwo(long n) {
        return (long)(Math.ceil(Math.log(n) / Math.log(2)))
        == (long)(Math.floor(Math.log(n) / Math.log(2)));
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = " ";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
