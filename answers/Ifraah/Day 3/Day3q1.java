import java.util.Scanner;
class Day3q1{
public static void main(String[] args){
Scanner sc = new Scanner(System.in);
  System.out.print("Enter the number of terms: ");
  int n = sc.nextInt();
 { 
   int a=0,s=0; 
   for(int i=1 ; i<=n ; i++) 
   { 
     a=(a*10)+i; 
     s=s+a; 
   } 
   System.out.println("Sum =" + s); 
   } 
}
}