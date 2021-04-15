import java.io.*;
import java.util*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int q = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
          a[i] = in.nextInt();
        for(int i = 0; i < q; i++) 
        {
          int x=(n+((in.nextInt()-k)%n)) % n;
          System.out.println(a[x]);
        }
    }
}
