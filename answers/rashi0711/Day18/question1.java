import java.util.Scanner;

public class perfect {

	public static void main(String[] args) {
		int s=0;int c=0;
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		for(int i=1;i<n;i++)
		{
			s=i*i;
			if(s<n)
			{
				c++;
			}
			else if(s>=n)
			{
				break;
			}
		}
		System.out.println(c);

	}

}
