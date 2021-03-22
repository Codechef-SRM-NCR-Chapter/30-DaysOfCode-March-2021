
public class ArrQ1 {
	public boolean iscandles(int n)
	{
		if(n>=5)
			return true;
		else
			return false;
	}
	public static void main(String[] args)
	{
		ArrQ1 ob=new ArrQ1();
		int arr[]= {2,3,5,1,3};
	
		for(int i=0;i<arr.length;i++)
		{
			int sum=3;
			if(arr[i]== 5)
				System.out.print("True");
			else
			{
				sum+=arr[i];
				boolean rest=ob.iscandles(sum);
				if(rest==true)
					System.out.print(" True  ");
				else
					System.out.print(" False ");
			}
		}
	}

}
