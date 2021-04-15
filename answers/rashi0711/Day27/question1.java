import java.util.Scanner;

public class rightrotation {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int r=sc.nextInt();
		int q=sc.nextInt();
		int arr[]=new int[n];int quer[]=new int[q];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		for(int i=0;i<q;i++)
		{
			quer[i]=sc.nextInt();
		}
		int j=0;
		while(j<r)
		{
			int temp=arr[n-1];
			for(int i=n-1;i>0;i--)
			{
				arr[i]=arr[i-1];
			}
			arr[0]=temp;j++;
		}
		for(int i=0;i<q;i++)
		{
			System.out.println(arr[quer[i]]);
		}
				

	}

}
