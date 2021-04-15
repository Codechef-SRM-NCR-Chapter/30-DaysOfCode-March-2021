import java.util.Scanner;

public class infinite {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);int k=0;
		String str=sc.nextLine();int n=str.length();int c=0;
		char a[]=new char[n];int t=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			a[i]=str.charAt(i);
		}
		for(int i=n;i<t;i++)
		{
			str=str+a[k];
			if(k>=n-1)
			{
			k=0;	
			}
			else
			{
				k++;
			}
		}
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i)=='a')
			{
				c++;
			}
		}
		System.out.println(c);

	}

}
