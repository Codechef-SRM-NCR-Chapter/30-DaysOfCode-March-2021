import java.util.Scanner;

public class binaryposition {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		int pos=find(a,0,n,-1);
		System.out.println(pos);

	}
	public static int find(int a[],int low,int high,int p)
	{
		if(low==high&&a[high]==1&&a[low]==1)
		{
			return -1;
		}
		
		int mid=(low+high)/2;
		if((a[mid]==0&&mid==a.length-1))
		{
			return -1;
		}
		if(low<high)
		{
			if(a[mid]==0&&a[mid+1]==1)
			{
				p=mid+1;
			}
			else
			{
				if(a[mid]==1)
				{
					return find(a,low,mid,p);
				}
				else if(a[mid]==0)
				{
					return find(a,mid+1,high,p);
				}
					
			}
		}return p;
	}

}
