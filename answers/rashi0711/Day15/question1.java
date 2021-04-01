import java.util.Scanner;

public class reversewords {

	 public static void main(String[] args) 
	 {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		
		String reversewords=reverse(str,str.length()-1,"");
		System.out.println(reversewords.trim());
	}
	public static String reverse(String str,int i,String s)
	{
		
		if((int)str.charAt(i)==32)
		{
			s=s+" "+str.substring(i+1);
			
			return reverse(str.substring(0,i+1),--i,s);
		}
		else if((i==0)&&((int)str.charAt(i)!=32))
		{
			s=s+str.substring(0);
			return s;
		}
		else if((int)str.charAt(i)!=32)
		{
			
			return reverse(str,--i,s);
		}
		
		return s;
	}
}
		
