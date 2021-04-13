import java.util.Scanner;

public class modifyarray {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int arr[]=new int[n];int c=0;int s=0;int p=0;
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<n-1;i++)
		{
			c+=sort(arr[i],arr[i+1],0);
		}
		int j=0;
		while(j<c)
		{
			for(int i=0;i<n-1;i++)
			{
				if(arr[i]>=arr[i+1])
				{
					arr[i+1]++;s=1;
					
				}}
				if(s==1)
				{
					p++;
				}
				
			
			j++;s=0;
		}
		System.out.println(p);
		
	}
	public static int sort(int a,int b,int c)
	{
		if(a>=b)
		{
			return sort(a,b+1,c+1);
		}
		else
		{
			return c;
		}
	}

}
