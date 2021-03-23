import java.util.*;
public class array3
{
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of the array:");
		int n=sc.nextInt();
		int A[]=new int[n];
		int i,j,k,a,b,c,count=0;
		System.out.println("Enter the elements of the array:");
		for(i=0;i<n;i++)
		{
			A[i]=sc.nextInt();
		}
		System.out.println("Enter the value of a,b,c");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				for(k=j+1;k<n;k++)
				{
					if((Math.abs(A[i]-A[j])<=a)&&(Math.abs(A[j]-A[k])<=b)&&(Math.abs(A[i]-A[k])<=c))
					{
						System.out.println(A[i]+","+A[j]+","+A[k]);
					    count++;
					}
				}
			}
		}
		System.out.println("Output : "+count);
	}
}
