import java.util.*;

public class day3 {
    public static void main(String[] args){

//        question2
        Scanner inp=new Scanner(System.in);
        System.out.print("Give the number to be checked : ");
        int n=inp.nextInt();
      
        String str=Integer.toString(n);
        char digit[]=str.toCharArray();
        int repeat=0;
      
        int i,j;
        for(i=0;i<str.length();i++){
            for(j=i+1;j<str.length();j++){
                if(digit[i]==digit[j]){
                    repeat++;}
                }
            }
        if(repeat>0){
            System.out.println(n+" is not an Unique Number");}
        else{
            System.out.println(n+" is an Unique Number");
            }
        }
    } 
