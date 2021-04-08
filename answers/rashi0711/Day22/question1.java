import java.util.Scanner;
import java.util.Stack;

public class substringstack {

	public static void main(String[] args) { 
		
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();int len=1;
		Stack<Character>d=new Stack<>();
		int n=str.length();
		for(int i=n-1;i>=0;i--)
		{
			d.push(str.charAt(i));
		}
		Stack<Character>p=new Stack<>();
		for(int i=0;i<n;i++)
		{
			if(d.empty())
			{
				break;
			}
		    char a=d.peek();
			d.pop();
			if(d.empty())
			{
				p.push(a);len++;
			}
			else
	    	{
			char b=d.peek();
			if(a==b)
			{
				d.pop();len--;
			}
			else
			{
				p.push(a);len++;
			}
	    	}
		}
		if(p.empty()==true&&d.empty()==true)
		{
			System.out.println("-1");
		}
		else if(p.empty()==true&&len==n)
		{
			for(int i=0;i<n;i++)
			{
				System.out.println(d.pop());
			}
		}
		
		else if(p.empty()!=true&&d.empty()==true)
		{
			int y=1;
			Stack<Character>q=new Stack<>();
			for(int i=0;i<n;i++)
			{
				if(p.empty())
				{
					break;
				}
				char a=p.peek();
				p.pop();
				if(p.empty())
				{
					q.push(a);y++;
				}
				else
				{
				char b=p.peek();
				if(a==b)
				{
					p.pop();y--;
				}
				else
				{
					q.push(a);y++;
				}
			    }
			}
			
		 if(p.empty()==true)
		{
			for(int i=0;i<n;i++)
			{
				if(q.empty())
				{
					break;
				}
				System.out.print(q.pop());
			}
		}
		 else if(p.empty()==true&&q.empty()==true)
			{
				System.out.println("-1");
			}
			else if(q.empty()==true)
			{
				for(int i=0;i<len;i++)
				{
					System.out.print(q.pop());
				}
			}
		}
		
		

	}

}
