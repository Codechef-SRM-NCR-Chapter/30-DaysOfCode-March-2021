import java.util.*;
public class ARR {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of the array:");
		int l=sc.nextInt();
		int arr[]=new int[l];
		int i,j,k,a,b,c,count=0;
		System.out.println("Enter the elements of the array:");
		for(i=0;i<l;i++)
		{
			arr[i]=sc.nextInt();
		}
		System.out.println("Enter the value of a,b,c");
		//int arr[]= {3,0,1,1,9,7};
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		for(i=0;i<l;i++)
		{
			for(j=i+1;j<l;j++)
			{
				for(k=j+1;k<l;k++)
				{
					if((Math.abs(arr[i]-arr[j])<=a) && (Math.abs(arr[j]-arr[k])<=b) &&  (Math.abs(arr[i]-arr[k])<=c))  
					{
						//System.out.println(arr[i]+","+arr[j]+","+arr[k]);
						count++;
					}
				}
			}
		}
		System.out.println("Output : "+count);

	}

}
