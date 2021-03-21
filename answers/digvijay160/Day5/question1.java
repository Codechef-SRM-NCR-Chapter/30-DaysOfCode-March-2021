public class day5 {
    public static void main(String[] args){
        
//        question1
int a=0;
int b=1;
int c;
      
System.out.print(a+","+b);
      
for(int i=3;i<=50;i++){
    c=a+b;
  
    System.out.print(","+c);
  
    a=b;
    b=c;
}

    }
}
