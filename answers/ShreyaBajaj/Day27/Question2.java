import java.util.*;
class RepeatedString
{

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String s = sc.nextLine().trim();
		System.out.println("no.of characters to consider");
		int n = Integer.parseInt(sc.nextLine().trim());
		sc.close();
		System.out.println("FREQUENCY: "+repeatedString(s, n));
	}

	static int repeatedString(String s, int n)
	{
		int count = 0;
		for (int i = 0; i < s.length(); i++) 
    {
			if (s.charAt(i) == 'a')
				count++;
		}
		int grp = n / s.length();
		int rem = n % s.length();
		count = grp * count;
		for (int i = 0; i < rem; i++)
		{
			if (s.charAt(i) == 'a')
				count++;
		}
		return count;
	}
}
