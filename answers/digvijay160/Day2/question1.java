import java.util.Scanner;
public class day2 {
    public static void main(String[] args){
        
//        question 1
Scanner inp=new Scanner(System.in);
int n=inp.nextInt();
int x=n;
      
int i=2;
int count=0;
int prime1=1;
      
while(i<n){
    if(n%i==0){
        count++;
        }
    i++;
    }
    if(count>0){prime1=0;}
      

int reverse=0;
while(n!=0){
      int remainder=n%10;
      reverse=reverse*10 +remainder;
      n=n/10;
    }
      
      
int count2=0;
int prime2=1;
int j=2;
      
while(j<reverse){
    if(reverse%j==0){
        count2++;
        }
    j++;
    }
    if(count2>0){prime2=0;}
      

if(prime1==1&&prime2==1)
        {System.out.println(x+" is an Emirp Number");}
else    {System.out.println(x+" is not an Emirp Number");}
      
    }
}
