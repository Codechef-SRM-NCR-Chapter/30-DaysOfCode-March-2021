public class day5 {
    public static void main(String[] args){
      
      //        question2
int i,j;
      
for(i=1;i<=4;i++){
  
    for(j=1;j<=i;j++){
      
        if((i==2&&j==1)||(i==2&&j==2)||(i==3&&j==2)||(i==4&&j==1))
          
        {System.out.print("#"+" ");}
      
        else{System.out.print("*"+" ");}
        }   
    System.out.println();
    }

 }
}
