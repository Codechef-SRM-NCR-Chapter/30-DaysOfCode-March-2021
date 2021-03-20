import java.util.Scanner;

public class series {

	public static void main(String[] args) {
		int i;int j=2;int n;
		System.out.print("Enter a number");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(i=1;i<=n;i++)
		{
			int s=(i*i*i)+j;
			System.out.print(s+" ");
			j+=2;
			
		}
	}

}
