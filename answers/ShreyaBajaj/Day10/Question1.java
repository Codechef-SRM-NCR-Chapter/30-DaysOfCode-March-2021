import java.io.*;
class pangram
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter string");
		String s=br.readLine();
		s=s.toLowerCase();
		boolean count[]=new boolean[s.length()];
		int index=0;
		for(int i=0;i<s.length();i++)
		{
			char ch=s.charAt(i);
			if('a'<=ch&& ch<='z')
			{
				index=ch -'a';
			    count[index]=true;
			}
		}
		int c=0;
		for(int i=0;i<26;i++)
		{
			if(count[i]==false)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		System.out.println("paragram doesn't exist");
		else
		System.out.println("paragram exist");
	}
}
