import java.util.*;
class emirp
{
	static boolean isprime(int n)
	{
		if(n<=1)
           return false;
           for(int i=2;i<n;i++)
		{
			if(n%i==0)
			return false ;
		}
		return true;
	}
      static boolean isemirp(int n)
      {
            if(isprime(n)==false)
            return false;
            int rev=0;
            while(n!=0)
            {
                  int d=n%10;
                  rev=rev*10+d;
                  n/=10;
            }
            return isprime(rev);
      }
      public static void main(String args[])
      {
            Scanner ob=new Scanner(System.in);
            int n;
            System.out.println("Enter a number");
            n=ob.nextInt();
            if(isemirp(n)==true)
            System.out.println("YES");
            else
            System.out.println("NO");
      }
}
