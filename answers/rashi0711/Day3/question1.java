import java.util.Scanner;

public class series1 {

	public static void main(String[] args) {
		int i=1;
		int r=0;int n;
		System.out.println("Enter a number");
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		while(i<=n)
		{
			
			r=r*10+i;
			System.out.print(r+" ");
			i++;
		}

	}

}
