import java.util.Scanner;

public class Concatenationstrings {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
			String str=sc.nextLine();int c=0;
			String s=str.charAt(0)+"";
			
			for(int i=1;i<str.length();i++)
			{
				if(Character.isUpperCase(str.charAt(i))!=true)
				{
					s=s+str.charAt(i);
					if(i==str.length()-1)
					{
						c++;
						System.out.println(s);
					}
					
				}
					
				
				else
				{
					c++;
					System.out.println(s);
					s=str.charAt(i)+"";
					
				}
			}
			System.out.println(c);
	}
}
			
