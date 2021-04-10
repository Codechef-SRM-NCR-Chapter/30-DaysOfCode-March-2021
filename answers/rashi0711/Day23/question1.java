import java.util.Scanner;
import java.util.Stack;

public class words {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Stack<String>st=new Stack<>();
		String str=sc.nextLine();
		str=str+" ";
		int n=str.length();
		int k=0;int i=0;int t=0;
		while(i<n)
		{
			if(str.charAt(i)==' ')
			{
			String s=str.substring(t,i);
			k++;
			
			st.push(s);t=i+1;
			}
			
			i++;
		}
	
	for(int j=0;j<k;j++)
	{
		System.out.print(st.pop()+" ");
			
		}

	}

}
