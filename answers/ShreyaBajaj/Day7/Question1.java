import java.util.*;
class insertion
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer> arr=new ArrayList<Integer>();
		System.out.println("Enter number of terms");
		int n=sc.nextInt();
		int num[]=new int[n+1];
		int index[]=new int[n];
		System.out.println("Enter numbers");
		for(int i=0;i<n;i++)
		{
			num[i]=sc.nextInt();
		}
		System.out.println("Enter index");
		for(int i=0;i<n;i++)
		{
			index[i]=sc.nextInt();
		}
		for (int i = 0; i < n ; i++)
		{
			int val=num[i];
			arr.add(index[i],val);
                }
		for(int j:arr)
		{
			System.out.print(j+",");

		}
	}
}
