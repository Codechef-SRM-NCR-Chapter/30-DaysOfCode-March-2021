import java.util.Scanner;

public class differentstrings {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();int c=1;
		strings(str,0,str.length()-1);
		for(int i=1;i<=str.length();i++)
		{
			c=c*i;
		}
		
		System.out.println(c);

	}
	public static void strings(String str,int l,int r)
	{
		
		if(l==r)
		{
			System.out.println(str);
		}
		else
		{
			for(int i=l;i<=r;i++)
			{
				str=swap(str,l,i);
				strings(str,l+1,r);
				str=swap(str,l,i);
				
			}
		}
	
	}
	public static String swap(String str,int i,int j)
	{
		char temp;
		char[] c=str.toCharArray();
		temp=c[i];
		c[i]=c[j];
		c[j]=temp;
		return(String.valueOf(c));
	}
}
