import java.util.*;
class Question2
{
public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter number");
    int num = sc.nextInt();
    int temp= num;
    int c=0,rev,s=0,d=0;
    for(int i=1;i<=temp;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
        if(c==2)
        {
            while(temp>0){
                rev=temp%10;
                 s=rev*10+temp;
                 temp=temp/10;
                }
                for(int i=1;i<=s;i++){
    
        if(s%i==0)
        {
            d++;
        }
    }
        if(d==2){
            System.out.println(num+" IS AN EMIRP NUMBER"); 
        }
        else{
            System.out.println(num+" IS NOT AN EMIRP NUMBER");
        }
    }
}
}




    
    
