import java.util.Scanner;

public class minimum {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int i=0;
		while(i<t)
		{
		int n=sc.nextInt();
		int u=steps(0,0,n,0);
		System.out.println(u);i++;

	}}
	public static int steps(int x,int y,int n,int s)
	{
		if(n==x)
		{
			return s;
		}
		else
		{
			s+=Math.abs(x)+Math.abs(x+1)+Math.abs(x-1);
			return steps(x+1,y,n,s);
		}
		
		

}
}
