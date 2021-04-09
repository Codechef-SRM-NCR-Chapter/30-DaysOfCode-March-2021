import java.util.Scanner;
import java.util.Stack;

public class reversestack {

	public static void main(String[] args) {
		Stack<Character> letters=new Stack<>();
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		for(int i=0;i<str.length();i++)
		{
			letters.push(str.charAt(i));
		}
		for(int i=0;i<str.length();i++)
		{
			System.out.print(letters.pop());
		}
		
		

	}

}
