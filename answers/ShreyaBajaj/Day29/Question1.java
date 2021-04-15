import java.util.*;
class rearrange_arrayb
{
	 static void rvereseArray(int arr[],int start, int end)
	 {
		 int temp;
	     while (start < end)
	     {
	         temp = arr[start];
	         arr[start] = arr[end];
	         arr[end] = temp;
	         start++;
	         end--;
	     }
    }
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter no.of test cases");
		int t=sc.nextInt();
		for(int j=0;j<t;j++)
		{
			System.out.println("Enter n");
		    int n=sc.nextInt();
		    System.out.println("Enter x");
		    int x=sc.nextInt();
		    int a[]=new int[n];
		    System.out.println("Enter elements in array a");
		    for(int i=0;i<n;i++)
		    a[i]=sc.nextInt();
		    int b[]=new int[n];
		    System.out.println("Enter elements in array b");
		    for(int i=0;i<n;i++)
		    b[i]=sc.nextInt();
		    rvereseArray(b, 0, n-1);
		    int flag=0;
		    for(int i=0;i<n;i++)
		    {
				if(a[i]+b[i]<=x)
				continue;
				else
				{
					flag=1;
					System.out.println("NO");
					break;
				}
			}
			if(flag==0)
			System.out.println("YES");
		}
	}
}



