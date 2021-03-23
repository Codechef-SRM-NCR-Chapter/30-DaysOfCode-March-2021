import java.util.Scanner;

public class insertion {

	public static void main(String[] args) {
		int n;int k=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int nums[]=new int[n];
		int index[]=new int[n];
		int output[]=new int[n];
		int temp[]=new int[n];
		for(int i=0;i<n;i++)
		{
			nums[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			index[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
		  k=index[i];
		  if(frequency(index,k)!=true)
		  {
			  output[k]=nums[k];
		  }
		  else
		  {
			  int r=k;
			  for(int q=0;q<i;q++)
			  {
				  temp[q]=output[q];
			  }
			  for(int t=k;t<i;t++)
			  {
				  output[t+1]=temp[t];
			  }
			  output[r]=nums[i];
		  }
		}
		for(int l=0;l<n;l++)
		{
			System.out.print(output[l]+" ");
		}
	}
	public static boolean frequency(int a[],int k)
	{
		int c=0;
	
		for(int i=0;i<a.length;i++)
		{
			if(a[i]==k)
			{
				c++;
			}
		}
		if(c>1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
