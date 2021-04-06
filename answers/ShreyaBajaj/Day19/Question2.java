import java.util.*;
class count_triplets
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no. of elements");
		int n = sc.nextInt();
		System.out.println("Enter sum");
		int sum = sc.nextInt();
		int arr[] = new int[n];
	    System.out.println("Enter elements in array");
	    for(int i=0;i<n;i++)
		arr[i]=sc.nextInt();
		int count = 0;
		for (int i = 0; i < n-2; i++)
		{
			for (int j = i+1; j < n-1; j++)
		    {
				for (int k = j+1; k < n; k++)
				{
					if (arr[i] + arr[j] + arr[k] < sum)
					{
						System.out.println("("+arr[i] +" "+ arr[j]+" "+arr[k]+")");
						count++;
					}
				}
			}
		}
		System.out.println("OUTPUT: "+count);
	}
}
