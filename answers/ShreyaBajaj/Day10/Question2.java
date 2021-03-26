import java.io.*;
class camelcase
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter string");
		String s=br.readLine();
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			char ch=s.charAt(i);
			if(ch>=65&& ch<=91)
			{
				System.out.println();
				System.out.print(ch);
		        count++;
			}
			else
			System.out.print(ch);
		}
		System.out.println();
		System.out.println(count);
	}
}
