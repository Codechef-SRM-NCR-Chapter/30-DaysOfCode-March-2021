import java.util.Scanner;

public class day2 {
    public static void main(String[] args){
      
//  question2   
      
Scanner input=new Scanner(System.in);   
int n=input.nextInt();
      
int i=n, digit=0, sum=0;
String str=Integer.toString(n);
int l=str.length();

while(i>0){
    digit=i%10;
    sum= sum+ (int)Math.pow(digit,l);
    l--;
    i=i/10;
}

if(sum==n)
{System.out.println(n+" is a Disarium");}
else
{System.out.println(n+" is not a Disarium");}

    
}
}
