import java.util.Scanner;

public class Day3q2 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int c = n;
    int[] a = new int[100];
    int i = 0, count = 0;
    while (c != 0) {
      int num = c % 10;
      a[i] = num;
      i++;
      c = c / 10;
    }
    for (int j = 0; j <= i - 1; j++) {
      for (int k = j + 1; k <= i - 1; k++) {
        if (a[j] == a[k]) {
          count++;
        }
      }
    }
    if (count > 0) {
      System.out.println(n+ " is not an Unique number");
    } else {
      System.out.println(n+" is an Unique number");
    }
  }
}