import java.util.*;
class reverse_words
{
	static String reverse(String s)
	{
		int space=s.indexOf(" ");
		if(space!=-1)
		reverse(s.substring(space+1,s.length()));
		if(space==-1)
		System.out.print(s.substring(0,s.length()));
		else
		System.out.print(s.substring(0,space+1));

		return s;
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String s=sc.nextLine();
		reverse(s+" ");
	}
}
