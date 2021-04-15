import java.util.Scanner;

public class rearrangeelements {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();int p=0;int f=0;int c[]=new int[t];
		while(p<t)
		{
			int n=sc.nextInt();
			int x=sc.nextInt();
			int arr[]=new int[n];
			int brr[]=new int[n];
			for(int i=0;i<n;i++)
			{
				arr[i]=sc.nextInt();
			}
			for(int i=0;i<n;i++)
			{
				brr[i]=sc.nextInt();
			}
			for(int i=0;i<n;i++)
			{
				int sum=arr[i]+brr[i];
				if(sum<=x)
				{
					f=1;
				}
				else 
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				c[p]=1;
			}
			else if(f==0)
			{
			for(int i=0;i<n;i++)
			{
				int sum=brr[n-i-1]+arr[i];
				if(sum<=x)
				{
					f=1;
				}
				else 
				{
					f=0;
					break;
				}
			}
			if(f==1)
			{
				c[p]=1;
			}
			else
			{
				c[p]=0;
			}
		}p++;}
			for(int i=0;i<t;i++)
			{
				if(c[i]==1)
				{
					System.out.println("YES");
				}
				else if(c[i]==0)
				{
					System.out.println("NO");
				}
			}
	}

}
