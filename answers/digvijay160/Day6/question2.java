import java.util.Scanner;

public class day6 {
    public static void main(String[] args){
      
      //    question2
Scanner inp=new Scanner(System.in);
int[] arr = new int[5];
      
System.out.print("ARR = [");
    for(int i=0;i<arr.length;i++){
      
        int num=inp.nextInt();
        arr[i]=num;
      
        System.out.print(",");
    }
System.out.println("] ");
      

int sum1=0;
int sum3=0;
      
    for(int j=0;j<arr.length;j++){
        sum1=sum1 + arr[j] ;
    }
      
    for(int k=0;k<=2;k++){
        sum3=sum3 + arr[k] ;
    }
      
    for(int l=1;l<=3;l++){
        sum3=sum3 + arr[l] ;
    }
      
    for(int m=2;m<=4;m++){
        sum3=sum3 + arr[m] ;
    }
      
int sum5=sum1;
int totalsum=sum1+sum3+sum5;
      
System.out.print("Output = "+totalsum);
    
    }
}
