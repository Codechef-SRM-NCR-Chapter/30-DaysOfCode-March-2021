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
      
      
      
 //        Question_2
        int j,k;
      
        for(j=1;j<=4;j++){
          
          for(k=(4-j);k>0;k--){
            System.out.print(" ");
          }
          
          for(k=1;k<=j;k++){
            System.out.print("*");
          }
          
        System.out.println();
        }
      
    }
}
