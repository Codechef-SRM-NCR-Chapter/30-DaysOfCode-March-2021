public class Day1{
  public static void main(String[] args){
    
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
