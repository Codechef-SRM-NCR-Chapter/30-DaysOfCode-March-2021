import java.util.*;
class perfect_squares
{
	static int countSquares(int n)
	    {
	        int cnt = 0;
	        for (int i = 1; i < n; i++)
	        {
	            for (int j = 1; j * j <= i; j++)
	            {
	                if (j * j == i)
	                    cnt++;
				}
			}
	        return cnt;
	    }
	    public static void main(String args[])
	    {
			Scanner sc=new Scanner(System.in);
			System.out.println("Enter N");
			int N= sc.nextInt();
			System.out.println("OUTPUT: "+ countSquares(N));
	    }
}
