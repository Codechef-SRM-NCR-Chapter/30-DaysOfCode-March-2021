import java.util.*;
class divisible_sum
{
	static void printSubArray(int arr[], int start, int end)
    {
        System.out.print("[ ");
        for (int i = start; i <= end; i++)
            System.out.print(arr[i] +" ");
        System.out.print("]");
    }
    static boolean divideArray(int arr[], int n, int sum)
	    {

				ArrayList<Integer> x=new ArrayList<Integer>();
				if(order(arr,sum/2,0,x)==true)
				{
					System.out.println(x);
				    return true;
				}
				else

	        System.out.println("NO");

	        return false;
    }
    static boolean order(int a[],int sum,int i,ArrayList<Integer> x)
	    {
	        if(i>=a.length || sum<0)
	        return false;
	        if(sum==0)
	        return true;
	        x.add(a[i]);
	        if(order(a,sum-a[i],i+1,x))
	        return true;
	        x.remove(x.size()-1);
	        return order(a,sum,i+1,x);
    }
    public static void main (String[] args)
    {
		Scanner sc=new Scanner(System.in);
		int n =sc.nextInt();
		int sum=0;
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
            sum=sum+arr[i];
		}
		if(sum%2!=0)
		System.out.println("NO");
		else
		System.out.println("YES");
        divideArray(arr, n,sum/2);
    }
}
