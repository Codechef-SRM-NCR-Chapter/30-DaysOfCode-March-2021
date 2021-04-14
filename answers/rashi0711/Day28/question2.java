import java.util.Scanner;

public class peakarray {

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();int p=0;
		while(p<t) 
		{
		int n=sc.nextInt();int k=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=i+1;
		}
		int j=permute(arr,0,k,t,0);
		if(j==0)
		{
			System.out.println("-1");
		}
		p++;
		}
      }
	public static int permute(int arr[],int m,int k,int t,int r)
	{
		
		if(m==arr.length)
		{
			int l=0;
			for(int i=0;i<arr.length;i++)
			{
				if(1<=i&&i<arr.length-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1])
				{
					l++;
				}
			}
				if(l==k)
				{
					for(int j=0;j<arr.length;j++)
					{
						System.out.print(arr[j]+" ");
					}
					
					return 1;
				}
			}
		else
		{
			for(int i=m;i<arr.length;i++)
			{
			 int tem=arr[m];
			 arr[m]=arr[i];
			 arr[i]=tem;
			int u= permute(arr,m+1,k,t,0);
			 if(u==1)
			 {
				 return 1;
			 }
			 tem=arr[m];
			 arr[m]=arr[i];
			 arr[i]=tem;
			}
		}
		return 0;
	}

}
