import java.util.Scanner;
public class digits {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();int c=0;int s=0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)!='0')
			{
				str=str.substring(i);
				break;
			}
		}
		int f=0;
		int n=str.length();
		for(int i=0;i<n;i++)
		{
			char ab=str.charAt(i);
			if(ab!='4'&&ab!='7')
			{
				f=0;
			}
			
			else
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			System.out.println("-1");
		}
			
		else
		{
			
		for(int j=0;j<n;j++)
		{
			char a=str.charAt(j);
			if(a=='4')
			{
				c++;
				
			}
			if(a=='7')
			{
				s++;
		    }
		}
		
		 if(s==c)
		{
			System.out.print("4");
	
		}
		 else if(c>s)
		{
			System.out.print("4");
		}
		else if(s>c)
		{
		System.out.print("7");
		}
		
		}
		}
}

