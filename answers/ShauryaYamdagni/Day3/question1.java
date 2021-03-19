import java.util.*;
class shaurya
{
public static void main(String args[]) 
{


Scanner sc= new Scanner(System.in);
System.out.println("enter the number of terms you want the sum of");
int n=sc.nextInt();
int x,y=0,z=n,a=0,b,c;
int m=n;
for (x=1;x<=z;x++)
{
    n=m;
    c=1;
    a=0;
     while(x<=n)
     {
     
      a=((a*10)+c);
      c++;
      n--;
     }
     y=y+a;
}

System.out.println(y);


}

}
