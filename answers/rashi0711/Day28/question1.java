import java.util.Scanner;

public class divisionset {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();int brr[]=new int[n];int crr[]=new int[n];
		int s=0;int sum=0;int c=0;
		for(int i=0;i<=n;i++)
		{
			s=s+i;
		}
		if(s%2==0)
		{
			int arr[]=new int[n];
			for(int i=0;i<n;i++)
			{
				arr[i]=i+1;
			}
			System.out.println("YES");
			if(n%2==0)
			{
				int j=0;
				for(int i=0;i<n/2;i+=2)
				{
					brr[j]=arr[i];
					j++;
					brr[j]=arr[n-1-i];
					j++;
					c+=2;
				}
				for(int i=1;i<n/2;i+=2)
				{
					brr[j]=arr[i];
					j++;
					brr[j]=arr[n-1-i];
					j++;
				}
				System.out.println(c);
				for(int i=0;i<c;i++)
				{
					System.out.print(brr[i]+" ");
				}
				System.out.println();
				System.out.println(n-c);
				for(int i=c;i<n;i++)
				{
					System.out.print(brr[i]+" ");
				}
				
			}
			else
			{
				    int j=0;int sum1=s/2;
					for(int i=n-1;i>=0;i--)
					{
					if(arr[i]<sum1)
					{
						brr[j]=arr[i];c++;j++;sum1=sum1-i-1;
					}
					else  
					{
					   brr[j]=sum1;c++;break;
					}
					}
				System.out.println(c);
				for(int i=0;i<c;i++)
				{
					System.out.print(brr[i]+" ");
				}
				System.out.println();
				System.out.println(n-c);int p=n-1;
				while(p>=0)
				{
					int q=0;
					while(q<c)
					{
						if(arr[p]==brr[q])
						{
							p--;q++;
						}
						else if(arr[p]>brr[q])
						{
							System.out.print(arr[p]+" ");p--;
						}
						else if(arr[p]<brr[q])
						{
							System.out.print(arr[p]+" ");p--;
						}
						if(p==-1)
						{
							break;
						}
						
					}
				}
			}
		}
		else
		{
			System.out.println("NO");
		}
	}}
		
