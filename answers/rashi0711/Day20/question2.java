import java.util.Scanner;
import java.util.Stack;

public class stackparentheses {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int f=0;
		Stack<Character>brackets=new Stack<>();
		String str=sc.nextLine();
		for(int i=0;i<str.length();i++)
		{
			char at=str.charAt(i);
			if(at=='['||at=='{'||at=='(')
			{
				brackets.push(at);
			}
			else if(at=='}')
			{
				char p='{';
				char a=brackets.peek();
				if(p==a)
				{
					f=1;brackets.pop();
				}
				else
				{
					f=0;break;
				}
				
			}
			else if(at==']')
			{
				char p='[';
				char a=brackets.peek();
				if(p==a)
				{
					f=1;brackets.pop();
				}
				else
				{
					f=0;break;
				}
				
			}
			else if(at==')')
			{
				char p='(';
				char a=brackets.peek();
				if(p==a)
				{
					f=1;brackets.pop();
				}
				else
				{
					f=0;break;
				}
				
			}
			
			
		}
		if(brackets.empty())
		{
			System.out.println("true");
		}
		else if(f==0)
		{
			System.out.println("false");
		}
		else if(brackets.empty()==false)
		{
			System.out.println("false");
		}
		
	}

}
