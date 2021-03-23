import java.util.Scanner;
public class day6 {
    public static void main(String[] args){
        
//        question1
Scanner inp=new Scanner(System.in);
      
int[] candies = new int[6];
System.out.print("Candies(5 Inputs Only) = [");
      
   for(int i=1;i<=(candies.length-1);i++){
      
     int can=inp.nextInt();
     candies[i]=can;
       
     System.out.print(",");
   }
System.out.print("] , ");
      

System.out.print("ExtraCandies = ");    
int extraCandies=inp.nextInt();
System.out.println();


System.out.print("Output = [");
    for(int j=1;j<=candies.length-1;j++){
    int greater=0;
      
       for(int k=1;k<=candies.length-1;k++){
         
          if((extraCandies+candies[j])>=candies[k]){
           greater++;}
       }
      
      if(greater>=5){
       System.out.print("True, ");}
      
      else{System.out.print("False, ");}
     }
      
System.out.print("]");
      
    }
}
