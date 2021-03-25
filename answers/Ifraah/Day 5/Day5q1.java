import java.util.Scanner;
class Day5q1{
public static void main(String[] args){
System.out.println("Enter no. of terms:");
     Scanner s = new Scanner(System.in);
     int n = s.nextInt();
    int a1=0, a2=1;
    for( int i=1; i<=n; i++){
   System.out.println(a1 +  "  ");
   int sum = a1 + a2;
   a1 = a2;
   a2 = sum;
}
}
}
