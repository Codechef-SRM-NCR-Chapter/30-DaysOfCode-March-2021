import java.util.*;
class convert_to_0
{
	static int countMinOperations(int arr[],int n)
	{
		int result = 0;
	    while (true)
	    {
			int zero_count = 0;
			int i;
	        for (i=0; i<n; i++)
	        {
				if (arr[i] % 2 == 1)
	            break;
	            else if (arr[i] == 0)
	            zero_count++;
	        }
	        if (zero_count == n)
	        return result;
	        if (i == n)
	        {
				for (int j=0; j<n; j++)
	            arr[j] = arr[j]/2;
	            result++;
			}
			for (int j=i; j<n; j++)
	        {
				if (arr[j] %2 == 1)
	            {
	               arr[j]--;
	               result++;
	            }
			}
	     }
	 }
  public static void main(String[] args)
  {
		 Scanner sc=new Scanner(System.in);
		 System.out.println("Enter n");
		 int n=sc.nextInt();
		 System.out.println("Enter array elements");
         int arr[]=new int[n];
         for(int i=0;i<n;i++)
		 arr[i]=sc.nextInt();
         System.out.println("OUTPUT: "+ countMinOperations(arr,n));
  }
}
