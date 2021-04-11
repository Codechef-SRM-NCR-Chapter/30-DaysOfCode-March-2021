import java.util.Scanner;



public class minimums {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int i=0;
		while(i<t)
		{
		int x=sc.nextInt();
		int y=sc.nextInt();
		int p=count(0,0,x,y,0);
		if(p==-1)
		{
			System.out.println("Cannot reach the destination");
		}
		else
		{
		System.out.println(p);
		}
		i++;
	}}
		public static int count(int x1,int y1,int x,int y,int c)
		{
			if(x1==x&&y1==y)
			{
				return c;
			}
			else if(x1<x&&y1<y)
			{
				c++;
				return count(x1+1,y1+1,x,y,c);
			}
			else if(x1<x)
			{
				c++;
				return count(x1+1,y1,x,y,c);
				
			}
			return -1;
	
		}


}
