import java.util.*;
class shaurya
{
	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("enter the length of stirng");
		int n=sc.nextInt();
		System.out.println("enter the number of operations");
		int m=sc.nextInt();
		System.out.println("enter the string");
		String s =sc.next();
		int x,y,z,c=0;
		boolean[] answer=new boolean[0];
		for(x=0;x<m;x++)
		{
			int menu=sc.nextInt();
			if(menu==2)
			{
				answer=Arrays.copyOf(answer,answer.length + 1);
				int a=sc.nextInt()-1;
				int b=sc.nextInt()-1;
				String s1=s.substring(a,b+1);
				String s2="";
				for(y=0;y<s1.length();y++)
				{
					s2=s1.charAt(y)+s2;
				}
				if(s1.equalsIgnoreCase(s2))
				{
					answer[c]=true;
					c++;
				}
				else
				{
					answer[c]=false;
					c++;
				}
			}
			if(menu==1)
			{
				int index=sc.nextInt()-1;
				char ch=sc.next().charAt(0);
				String s1="";
				for(y=0;y<s.length();y++)
				{
					char ch1=s.charAt(y);
					if(y==index)
					{
						s1=s1+ch;
					}
					else
					{
						s1=s1+ch1;
					}
				}
				s=s1;
				s1="";
			}
		}
		for(x=0;x<answer.length;x++)
		{
			if(answer[x]==true)
			System.out.println("Yes");
			else
			System.out.println("No");
		}
	}
}
