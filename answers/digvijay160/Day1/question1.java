import java.util.Scanner;
public class Day1 {
  
    public static void main(String[] args) {
//        Question_1
        Scanner input=new Scanner(System.in);
      
        int n=input.nextInt();
      
        int x;
        
         for(int i=1;i<=n;i++){
         
           x=(i*i*i)+(2*i);         
           
           System.out.println(x);
        }
    }
}
