import java.util.*;
class nondecreasing_array
{
    static int nondecreasing(int a[], int n)
    {
        int sum = 0, dif = 0;
        int b=0;
        for (int i = 0; i < n; i++)
        {
            if (b > a[i])
            {
                dif = b-a[i];
                sum += dif;
            }
            b=a[i];
        }
        return sum;
    }
    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		int n =sc.nextInt();
	     int a[]= new int[n];
	     for(int i=0;i<n;i++)
	     {
			 System.out.println("Enter element");
		     a[i]=sc.nextInt();
		 }
		  System.out.println(nondecreasing(a, n));
    }
}
