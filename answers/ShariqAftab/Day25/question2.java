import java.util.*;
public class GoodNumber
 {
public static void main (String[] args)
{
Scanner myInput = new Scanner( System.in );
int t = myInput.nextInt();
while(t>0)
{
   Queue<Long> q = new LinkedList<Long>();
   long a=1,b=2;
   q.add(a);q.add(b);
   t--;
   int n = myInput.nextInt();
   long num=1;
   while(n>0)
   {
       num = q.remove();
       n--;
       q.add(num*10+1);
       q.add(num*10+2);
   }
   System.out.println(num);
}
}
}
