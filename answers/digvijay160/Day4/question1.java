import java.util.Scanner;

public class day4 {
    public static void main(String[] args){

//        question1
Scanner inp=new Scanner(System.in);
int n=inp.nextInt();

int x=n;
int i;

for(i=2;i<=n;){
    if(x%i==0){
        System.out.print(i+",");
        x=x/i;
    }
    
    else {i++;}
    
  }
}
}
