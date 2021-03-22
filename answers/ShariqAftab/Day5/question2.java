import java.util.*;
import java.math.*;
public class Fibo
{
    public static void main()
    {
        BigInteger a=BigInteger.ZERO;
        BigInteger b= BigInteger.ONE;
        BigInteger c;
        for(int i=1;i<=50;i++)
        {
            c=a.add(b);
            System.out.println(a);
            a=b;
            b=c;
        }
    }
}
