import java.util.*;
class remove_stack
{
	static int remove(int n)
	{
		int prev_digit = n % 10;
		int pow = 10;
	    int res = prev_digit;
	    while (n>0)
	    {
			int curr_digit = n % 10;
			if (curr_digit != prev_digit)
	        {
				res += curr_digit * pow;
				prev_digit = curr_digit;
	            pow *= 10;
	        }
	        n = n / 10;
	    }
	    return res;
	}
	public static void main (String[] args)
	{
		Scanner sc=new Scanner(System.in);
	    System.out.println("Enter number of test cases");
		int T=sc.nextInt();
		for(int i=0;i<T;i++)
		{
			System.out.println("Enter number");
		    int n=sc.nextInt();
			System.out.println(remove(n));
		}
	}
}
