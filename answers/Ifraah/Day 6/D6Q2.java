import java.util.Scanner;

class D6Q2{
    public static void main(String[] args){
         System.out.println("Enter the no. of elements:");
         Scanner scan = new Scanner(System.in);
         int n = scan.nextInt();  
         int array[] = new int[10] ;
         System.out.println("Enter the elements:"); 
         for(int i=0; i<n; i++)
         {
         array[i] = scan.nextInt(); 
         } 
          for(int i=0; i<n; i++)
         {
         System.out.println(array[i]); 
         } 
	int sum = 0;
          for(int j=0; j<n; j++){
        sum += ((j+1) * (n-j)+1)/2 * array[j];
	}
System.out.println(sum);
    }
}