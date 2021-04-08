import java.util.Scanner;
import java.util.Stack;

public class repeatstack {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);int t=sc.nextInt();int j=0;
		while(j<t)
		{
		Stack<Integer>digits=new Stack<>();
		
		int n=sc.nextInt();
		int num=n;int c=0;int y=0;
		while(n!=0)
		{
			int b=n%10;
			c++;
			n=n/10;
		}
		for(int i=0;i<c;i++)
		{
			if(i==0)
			{
				digits.push(num%10);
				num=num/10;
			}
			else
			{
				int p=digits.peek();
				digits.push(num%10);
				if(p==digits.peek())
				{
					digits.pop();y++;
				}
				num=num/10;
			}
			
		}
		for(int i=0;i<c-y;i++)
		{
			System.out.print(digits.pop());
			
		}
		j++;

	}
	}

}
