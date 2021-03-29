import java.util.Scanner;

public class subspalindrome {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		
		n=sc.nextInt();
		int m=sc.nextInt();
		sc.nextLine();
		String str=sc.nextLine();
		StringBuilder str1=new StringBuilder(str);
		char arr[][]=new char[m][3];
		for(int i=0;i<m;i++)
			{
			for(int j=0;j<3;j++)
			{
			arr[i][j]=sc.next().charAt(0);
			}}
		for(int i=0;i<m;i++)
		{
		int j=0;
		 int first=Integer.parseInt(String.valueOf(arr[i][j]));
		 
		 int s=Integer.parseInt(String.valueOf(arr[i][++j]));
		 
		if(first==1)
		{
			str1.setCharAt(s-1,arr[i][++j]);
		}
		else if(first==2)
		{
			int u=Integer.parseInt(String.valueOf(arr[i][++j]));
			
			String t=str1.substring(s-1,u);
			String emp="";
			for(int k=u-1;k>=s-1;k--)
			{
				emp=emp+str1.charAt(k);
			}
			if(t.equalsIgnoreCase(emp))
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
		}
		}
	}
}
		
