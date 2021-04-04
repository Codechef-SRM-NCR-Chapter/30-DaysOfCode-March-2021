import java.util.Scanner;

public class sorting {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		
        int brr[]=new int[n];
        
        for(int i=0;i<n;i++)
        {
        	
        	 brr[i]=count(arr[i]);
        	 
        }     
       

        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n-i-1;j++)
        	{
        		if(brr[j]<brr[j+1])
        		{
        			int temp=arr[j];
        			arr[j]=arr[j+1];
        			arr[j+1]=temp;
        			int temp1=brr[j];
        			brr[j]=brr[j+1];
        			brr[j+1]=temp1;
        		}
        	}
        }
        for(int i=0;i<n;i++)
        {
        	System.out.print(arr[i]+" ");
        }

	}
	public static int count(int n)
	{
		int c=0;
		while(n!=0&&n!=1)
		{
			int b=n%2;
			if(b==1)
			{
				c++;
			}
			n=n/2;
		}
		if(n==1)
		{
			c++;
		}
		
		return c;
	}

}
