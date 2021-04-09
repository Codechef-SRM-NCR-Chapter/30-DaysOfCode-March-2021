import java.util.Scanner;

public class binaryone {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		int t=count(a,0,a.length-1,0);
		System.out.println(t);
		
	}
	public static int count(int a[],int low,int high,int c)
	{
		
		if(low==high&&high==0&&low==0)
		{
			return 0;
		}
		if(low<=high)
		{
			int mid=(low+high)/2;
			if((a[mid]==1&&mid==a.length-1))
			{
				c=a.length;
			}
			else if(a[mid]==1&&a[mid+1]==0)
			{
				c=mid+1;
			}
				else
				{
					if(a[mid]==1)
					{
						return count(a,mid+1,high,c);
					}
					else if(a[mid]==0)
					{
						return count(a,low,mid,c);
					}
				}
			}
		
		return c;
	}

}
