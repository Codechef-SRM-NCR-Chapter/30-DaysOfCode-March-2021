import java.util.Scanner;

public class primecomposite {

	public static void main(String[] args) {
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();int a;int b;
		int t=0;int arr[]=new int[n];
		while(t<n)
		{
			a=sc.nextInt();
			b=sc.nextInt();
			int prime=0;int composite=0;
		for(int i=a;i<=b;i++)
		{
			if(i!=1)
			{
			int flag=prime(i);
			if(flag==1)
			{
				prime++;
			}
			else if(flag==0)
			{
				composite++;
			}
		}}
		arr[t]=prime*composite;t++;

	}
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]);
		}

}
	public static int prime(int n)
	{
		int c=0;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
