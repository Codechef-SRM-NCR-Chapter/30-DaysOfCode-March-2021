import java.util.*;
class min_steps
{
	static int n;
	static void MinSteps(int SourceX, int SourceY,int X, int Y)
	{
		if(SourceX==X && SourceY==Y)
		System.out.println(n);
		else if(SourceX<X && SourceY<Y)
		{
			n++;
			MinSteps(SourceX+1, SourceY+1, X, Y);
		}
		else if(SourceX<X && SourceY==Y)
		{
			n++;
			MinSteps(SourceX+1, SourceY, X, Y);
		}
		else
		{
			System.out.println("CANNOT REACH DESTINATION");
			return;
		}
	}

    public static void main (String[] args)
    {
		Scanner sc=new Scanner(System.in);
	    System.out.println("Enter no. of test cases");
	    int T=sc.nextInt();
	    for(int i=0;i<T;i++)
	    {
			  System.out.println("Enter X and Y");
			int X=sc.nextInt();
			int Y=sc.nextInt();
            MinSteps(0,0,X,Y);
        }
	}
}
