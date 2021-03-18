import java.util.*;
class shaurya 
{
    public static int primecheck(int f)
    {
     int l,m=0;
     for(l=1;l<=f;l++)
      {
          if(f%l==0)
          m++;

      }

     if(m==2)
     return 1;
     else
     return 0;
    }
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
    y= y+(x*(int)Math.pow(10,c-1));

    n=(int)n/10;
    c--;
}
if(primecheck(y)==1 && primecheck(check)==1)
{
   System.out.println(check+" is an emirp number");
}
else
System.out.println(check+" is not a emirp number");
}
}
