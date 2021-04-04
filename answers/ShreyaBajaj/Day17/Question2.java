import java.util.*;
class sum_0
{

    public static void main(String[] args)
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n terms");
		int n=sc.nextInt();
	    int a[]=new int[n];
		System.out.println("Enter terms");
		for(int i=0;i<n;i++)
		a[i]=sc.nextInt();
        int res = 0;
        for (int i = 0; i < n; i++)
        {
			int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += a[j];
                if (sum == 0)
                    res++;
            }
        }
        System.out.println("OUTPUT: "+res);
    }
}
