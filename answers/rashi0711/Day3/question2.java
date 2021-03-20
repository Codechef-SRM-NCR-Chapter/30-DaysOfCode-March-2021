import java.util.Scanner;

public class unique {

	public static void main(String[] args) {
		int n;int c=0;int f=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int t=n;int d=n;
		while(t!=0)
		{
			int b=t%10;
			c++;
			t=t/10;
		}
		int arr[]=new int[c];int i=0;
		while(d!=0)
		{
			int b=d%10;
			arr[i]=b;
			d=d/10;
			i++;
		}
		for(int j=0;j<c;j++)
		{
			f=0;
			for(int k=0;k<c;k++)
			{
				if(arr[j]==arr[k])
					f++;
			}
			if(f>=2)
			{
				break;
			}
		}
		if(f>=2)
		{
			System.out.println("Not a Unique Number");
		}
		else
		{
			System.out.println("Unique number");
		}
		
	}

}
