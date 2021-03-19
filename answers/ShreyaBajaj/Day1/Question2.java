import java.util.*;
class pattern
{
	public static void main(String args[])
	{
		Scanner ob=new Scanner(System.in);
		System.out.println("Enter the number");
		int n=ob.nextInt();
		int i,j,k;
		for(int i=1;i<=n;i++)
		{
		     for(k=1;k<=n-i;k++)
                     {
       			System.out.print(" ");
		     }
                     for(j=1;j<=i;j++)
                     {
                        System.out.print("*");
                     }
                     System.out.println();
               }  
	}
}
