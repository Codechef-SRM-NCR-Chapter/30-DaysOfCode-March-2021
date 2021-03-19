import java.util.Scanner;
public class unique 
{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the number");
    int num = sc.nextInt();
    int temp=num;
    int[] a = new int[100];
    int i = 0, count = 0;
    while (temp != 0) {
       int rem= temp% 10;
      a[i] = rem;
      i++;
      temp= temp / 10;
    }
    for (int j = 0; j <= i - 1; j++) 
    {
        if (a[j] == a[j+1]) {
          count++;
        }
      }
    
    if (count > 0) {
      System.out.println(num+" IS NOT AN UNIQUE NUMBER");
    } else {
      System.out.println(num+" IS AN UNIQUE NUMBER");
    }
  }
}

