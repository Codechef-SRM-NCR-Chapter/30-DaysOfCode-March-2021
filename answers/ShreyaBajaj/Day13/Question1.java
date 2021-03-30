import java.util.*;
class sum_of_number
{
	int sum=0;
	int add(int n)
	{
		sum=n%10;
		if(n==0)
		return 0;
		else
		return (sum+add(n/10));
	}
	public static void main(String args[])
	{
		int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the no.");
		n=sc.nextInt();
		sum_of_number obj=new sum_of_number();
		int a =obj.add(n);
		System.out.println("SUM "+a);
	}
}
