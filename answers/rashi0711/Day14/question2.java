import java.util.Scanner;

public class sumarray {

	public static void main(String[] args) {
		int n;int m;int max=0;int min=0;
		Scanner sc=new Scanner(System.in);
		m=sc.nextInt();n=sc.nextInt();
		int arr[]=new int[m];
		for(int i=0;i<m;i++)
		{
		arr[i]=sc.nextInt();
		}
		int brr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			brr[i]=sc.nextInt();
		}
		if(m>n)
		{
			max=m;
		}
		else
		{
			max=n;
		}
		if(m<n)
		{
			min=m;
		}
		else
		{
			min=n;
		}
		
		int c[]=new int[max];
		if(max==m)
		{
		sum(arr,brr,c,max,min,0,arr);
		}
		else if(max==n)
		{
			sum(arr,brr,c,max,min,0,brr);
		}
		for(int i=0;i<max;i++)
		{
		 System.out.print(c[i]+" ");
		}
		
		}
	public static int[] sum(int arr[],int brr[],int c[],int max,int min,int i,int d[])
	{
		if(i<min)
		{
			c[i]=arr[i]+brr[i];
			return sum(arr,brr,c,max,min,++i,d);
			
		}
		else if(i>=min&&i<max)
		{
			c[i]=d[i];
			return sum(arr,brr,c,max,min,++i,d);
		}
		else if(i==max)
		{
			return c;
		}
return c;
	}

}
