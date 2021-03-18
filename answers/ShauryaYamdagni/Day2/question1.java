import java.util.*;
class shaurya 
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter a number");
int n= sc.nextInt();
int c=0,x,y=0,z,k=n;
while(k>0)
{
    x= k%10;
    c++;
    k=(int)k/10; 
}
int check=n;
while(n>0)
{
    x=n%10;
    y= y + (int)(Math.pow(x,c));
    n=(int)n/10;
    c--;
}
if(check==y)
System.out.println(y+" is a disarium number");
else
System.out.println(check+" is not a disarium number");
}
}
