import java.util.Scanner;
class Day5q2{
   public static void main(String[] args){
Scanner s = new Scanner(System.in);
System.out.println("Enter the no. of rows:");
int n = s.nextInt();
int k=1;
       for(int i=0; i<=n; i++){
          for(int j=0; j<i;j++){
if(isPrime(k)==true)
System.out.print( " # ");
else
 System.out.print( " * ");
k++;
          }
System.out.println();
}
   }
public static boolean isPrime(int n)
{
     int i,r=0;
for(i=1;i<=n;i++){
if(n%i==0)
r++;
}
if(r==2)
return true;
else 
return false;
}
}

