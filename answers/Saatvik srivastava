import java.util.*;
class Question1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int num =sc.nextInt();
        int sum=0;
        int temp = num;
        String s = Integer.toString(num);  
        int len = s.length();
           while(temp!=0){
               int rem = temp % 10;  
                sum = sum + (int)Math.pow(rem,len);
                len--;
                temp=temp/10;
            }
       if(sum == num)
                System.out.println(num+" IS A DISARIUM NUMBER");
            else
                System.out.println(num+" IS NOT A DISARIUM NUMBER");
        }
    }
