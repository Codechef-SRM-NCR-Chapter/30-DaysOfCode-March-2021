import java.util.Scanner;

public class recursionduplicates {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		String s=duplicates(str,0,str.length()-1,"");
		System.out.println(s);
	}
	public static String duplicates(String str,int i,int n,String s)
	{
		if(i>n)
		{
			return s;
		}
		else if(i==n)
		{
			return (s+str.charAt(i)+duplicates(str,++i,n,s));
		}
		else if(str.charAt(i)!=str.charAt(i+1))
		{
			return (s+str.charAt(i)+duplicates(str,++i,n,s));
		}
		else if(str.charAt(i)==str.charAt(i+1))
		{
			i=i+1; 
			return duplicates(str,i,n,s);
		}
		return s;
	}

}
