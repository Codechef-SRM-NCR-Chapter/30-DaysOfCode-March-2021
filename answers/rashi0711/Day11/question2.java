import java.util.Scanner;


public class countpatterns {

	public static void main(String[] args){
	 Scanner sc=new Scanner(System.in);
		
		String str=sc.nextLine();
		int n=sc.nextInt();
		sc.nextLine();
		String arr[]=new String[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextLine();
		}
		for(int i=0;i<n;i++)
		{
			int c=0;int j=0;
			char first=arr[i].charAt(0);int l=arr[i].length();
				while(j<str.length())
				{
					
					if(first==str.charAt(j))
					{
						if(l+j>str.length())
						{
							break;
						}
						String re=str.substring(j,l+j);
						if(re.equalsIgnoreCase(arr[i]))
						{
							c++;j=j+l;
						}
						else
						{
							j++;
						}
					}
					else
					{
						j++;
				}}
				System.out.println(c);
				c=0;
			}

		}}
			
			
		
	
