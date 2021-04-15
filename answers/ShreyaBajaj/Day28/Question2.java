import java.util.*;
class peak
{
	static void makePermutation(int []a, int n)
	{
		HashMap<Integer, Integer> count = new HashMap<Integer,Integer>();
    for (int i = 0; i < n; i++)
    {
        if(count.containsKey(a[i]))
        {
            count.put(a[i], count.get(a[i]) + 1);
        }
        else
        {
            count.put(a[i], 1);
        }
    }

    int next_missing = 1;
    for (int i = 0; i < n; i++)
    {
        if (count.containsKey(a[i]) && count.get(a[i])!= 1 || a[i] > n || a[i]< 1)
        {
            count.put(a[i], count.get(a[i]) - 1);
            while (count.containsKey(next_missing))
                next_missing++;
                a[i] = next_missing;
            count. put(next_missing, 1);
        }
    }
}
static boolean peak(int p,int a[])
	    {
	        int m=0;
	        if(p==0)
	        return true;
	        for(int i=1;i<a.length-1;i++)
	        {
	            if(a[i]>a[i-1] && a[i]>a[i+1])
	            m++;
	        }
	        if(m==p)
	            return true;
	        else
            return false;
		}

    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter no. of test cases");
		int t=sc.nextInt();
        int n = sc.nextInt();
        int A[]=new int[n];
        for(int i=0;i<n;i++)
        A[i]=i+1;
        makePermutation(A, n);
        for(int i=0;i<n;i++)
        {
			if(peak(A[i],A)==true)
			{
				for (int j = 0; j < n; j++)
                System.out.print(A[j] + " ");
			}
		}
    }
}
