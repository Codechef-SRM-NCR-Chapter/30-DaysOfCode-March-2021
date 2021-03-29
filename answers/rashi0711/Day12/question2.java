import java.util.Scanner;

public class binary {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int c=0;
		String arr[]=new String[n];
		int k=0;
		while(k<n)
		{
			
			int l=sc.nextInt();
			sc.nextLine();
			arr[k]=sc.nextLine();
			if(l!=arr[k].length())
			{
				System.out.println("error in length");
			}k++;}
			for(int i=0;i<n;i++)
			{
				c=frequency(arr[i]);
				System.out.println(c);
			}
			
		}
	public static int frequency(String str)
	{
		String s="";int c=0;
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
