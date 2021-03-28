import java.util.*;
class subpalindrome
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter l and n");
		int l=sc.nextInt();
		int m=sc.nextInt();
		System.out.println("Enter string");
		String s=sc.next();
		if(s.length()==l)
		{
			String arr[][]=new String[m][3];
			System.out.println("Enter operations");
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<3;j++)
				{
					arr[i][j]=sc.next();
				}
			}
			for(int i=0;i<m;i++)
			{

				int a=Integer.parseInt(arr[i][1]);
				if(Integer.parseInt(arr[i][0])==1)
				{
					s=s.replaceFirst(Character.toString(s.charAt(a-1)),arr[i][2]);
					System.out.println(s);
				}
				else if(Integer.parseInt(arr[i][0])==2)
				{
					int b=Integer.parseInt(arr[i][2]);
					String check="";
					for(int j=a-1;j<b;j++)
					{
						check=check+s.charAt(j);
					}
					String reverse="";
					for(int j=b-1;j>=a-1;j--)
					{
						reverse=reverse+s.charAt(j);
					}
					if(check.equalsIgnoreCase(reverse)==true)
					{
					    System.out.println(check);
					    System.out.println("YES");
				    }
					else
					System.out.println("NO");
				}
			}
		}
		else
		System.out.println("WRONG INPUT STRING");
	}
}
