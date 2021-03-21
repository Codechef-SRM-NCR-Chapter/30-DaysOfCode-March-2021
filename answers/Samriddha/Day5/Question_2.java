public class Question_2
{
    public static void main(String[] args) {
        int r = 4, n = 1;

        for(int i = 1; i <= r; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(isprime(n)==true)
                {
                    System.out.print("# ");
                    ++n;
                }
                else
                {
                    System.out.print("* ");
                    ++n;
                }
            }
            System.out.println();
        }
    }
    static boolean isprime(int n)
    {
        boolean isItPrime = true;

        if(n <= 1)
        {
            return false;
        }
        else
        {
            for (int i = 2; i<= n/2; i++)
            {
                if ((n % i) == 0)
                {
                    isItPrime = false;
                    break;
                }
            }
            return isItPrime;
        }
    }
}
