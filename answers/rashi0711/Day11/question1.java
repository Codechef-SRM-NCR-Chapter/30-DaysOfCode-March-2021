import java.util.Scanner;

public class anagram1 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String n=sc.nextLine();int c=0;int f=0;int p=0;int d=0;
		if(n.length()%2==0)
		{
		for(int i=0;i<n.length();i++)
		{
			c=count(n.charAt(i),n);
			
			if(c%2==0)
			{
				f=1;c=0;
			}
			else
			{
				f=0;break;
			}
		}
		
		if(f==1)
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
		}
		else if(n.length()%2!=0)
		{
			for(int i=0;i<n.length();i++)
			{
				c=count(n.charAt(i),n);
				if(c%2==0)
				{
					f=1;
				}
			
			else if(c%2!=0)
			{
				p++;d=c;c=0;
			}
		}
		if(p==d&&f==1)
		{
			System.out.print("Yes");
		}
		else
		{
			System.out.print("No");
		}
		}}
	public static int count(char a,String str)
	{
		int k=0;
		
		for(int j=0;j<str.length();j++)
		{
			if(a==str.charAt(j))
			{
				k++;
			}
		}
		return k;
	}
		
	}
