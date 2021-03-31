 import java.util.*;
class remove_duplicates
{
	static String remove(String s)
	{
		if(s.length()<=1)
		return s;
		if(s.substring(1,2).equals(s.substring(0,1)))
		return remove(s.substring(1));
		else
		return(s.substring(0,1)+remove(s.substring(1)));
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter string");
		String s=sc.nextLine();
		System.out.println(remove(s));
	}
}
