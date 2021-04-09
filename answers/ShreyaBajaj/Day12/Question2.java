import java.util.*;
class binary
{
	public static void main(String[] args)
	{
		int n;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no.try");
		n=sc.nextInt();
		int c=0;
		String arr[]=new String[n];
		int k=0;
		while(k<n)
		{
			System.out.println("Enter no.");
			int l=sc.nextInt();
			System.out.println("Enter element");
			arr[k]=sc.next();
			if(l!=arr[k].length())
			{
				System.out.println("error size");
			}
			k++;
		}
		for(int i=0;i<n;i++)
		{
			c=frequency(arr[i]);
			System.out.println(c);
		}
	}
	static int frequency(String str)
	{
		String s="";
		int c=0;
		for(int i=0;i<str.length();i++)
		{
			for(int j=i;j<str.length();j++)
			{
				if((str.charAt(i)=='1'))
				{
					if(str.charAt(j)=='0')
					{
						s=s+str.charAt(j);
					}
					else if(str.charAt(j)=='1')
					{
						c++;s="";
					}
				}
			}
		}
		return c;
	}
}
