import java.util.*;
class binary_sort
{
	static int countBits(int n)
	{
	    int c = 0;
	    while (n > 0)
	    {
	        if ((n & 1) > 0)
	            c+= 1;
	        n = n>> 1;
	    }
	    return c;
    }
    static void sort(int arr[],int n)
	{
	  Vector<Integer> []count =new Vector[32];
	  for (int i = 0;i < count.length; i++)
	    count[i] = new Vector<Integer>();
	  int c= 0;
	  for (int i = 0; i < n; i++)
	  {
	    c = countBits(arr[i]);
	    count[c].add(arr[i]);
	  }
	  int j = 0;
	  for (int i = 31; i >= 0; i--)
	  {
	    Vector<Integer> v1 = count[i];
	    for (int p = 0; p < v1.size(); p++)
	      arr[j++] = v1.get(p);
	  }
	}
	static void print(int arr[], int n)
	{
	  for (int i = 0; i < n; i++)
	    System.out.print(arr[i] + ", ");
	}
	public static void main(String[] args)
	{
		  Scanner sc=new Scanner(System.in);
	    System.out.println("Enter no. of elements");
	    int n = sc.nextInt();
		  int arr[] = new int[n];
		  System.out.println("Enter elements in array");
	    for(int i=0;i<n;i++)
		  arr[i]=sc.nextInt();
		  sort(arr,n);
	    print(arr,n);
	}
}
