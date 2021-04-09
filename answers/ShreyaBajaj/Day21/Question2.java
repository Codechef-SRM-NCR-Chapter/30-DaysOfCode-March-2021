import java.util.*;
class  min_sum
{
    static int Sum(int a[], int n)
    {
       Arrays.sort(a);
       int num1 = 0;
       int num2 = 0;
       for(int i = 0;i<n;i++)
       {
		   if(i%2==0)
           num1 = num1*10+a[i];
           else
           num2 = num2*10+a[i];
       }
       return num2+num1;
    }
    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		int N=sc.nextInt();
		int arr[]=new int[N];
		System.out.println("Enter elements");
		for(int i=0;i<N;i++)
		{
			arr[i]=sc.nextInt();
		}
         System.out.println("The required sum is:  " + Sum(arr, N));
	 }
}
