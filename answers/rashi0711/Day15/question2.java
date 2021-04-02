import java.util.Scanner;

public class possiblepaths {

	public static void main(String[] args) {
		int m,n;
		Scanner sc=new Scanner(System.in);
		m=sc.nextInt();
		n=sc.nextInt();
		int arr[][]=new int[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				arr[i][j]=sc.nextInt();
			}
		}
		int paths=count(m,n);
		System.out.println(paths);

	}
	public static int count(int m,int n)
	{
		if(m==1||n==1)
		{
			return 1;
		}
		else
		{
			return count(m-1,n)+count(m,n-1);
		}
	}

}
