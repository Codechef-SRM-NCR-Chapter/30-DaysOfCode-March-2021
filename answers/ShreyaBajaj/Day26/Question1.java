import java.util.*;
class prime_composite
{
    static int MAX = 1000000;
    static int []prime = new int[MAX + 1];
    static void updatePrimes()
    {
        for (int i = 2; i <= MAX; i++)
        {
            prime[i] = 1;
        }
        prime[0] = prime[1] = 0;
        for (int i = 2; i * i <= MAX; i++)
        {
            if (prime[i] == 1)
            {
                for (int j = i * i; j <= MAX; j += i)
                {
                    prime[j] = 0;
                }
            }
        }
        for (int i = 1; i <= MAX; i++)
        {
            prime[i] += prime[i - 1];
        }
    }
    static int getproduct(int l, int r)
    {
      int total = r - l + 1;
      int primes = prime[r] - prime[l - 1];
      int composites = total - primes;
      return (primes * composites);
    }

    public static void main (String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of test cases");
	    int T = sc.nextInt();
	     int arr1[]= new int[T];
	     int arr2[]= new int[T];
	    for(int i=0;i<T;i++)
	    {
			System.out.println("Enter range");
			arr1[i]=sc.nextInt();
			arr2[i]=sc.nextInt();
            updatePrimes();
            System.out.println ("RESULT: "+getproduct(arr1[i],arr2[i]));
		}
    }
}
