import java.util.Scanner;

public class language {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		sc.nextLine();
		String arr[]=new String[m];
		String brr[]=new String[m];
		for(int i=0;i<m;i++)
		{
			arr[i]=sc.nextLine();
			brr[i]=sc.nextLine();
		}
        String st="";
        String str=sc.nextLine();
        String a[]=str.split(" ");
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        	if(a[i].equals(arr[j])||a[i].equals(brr[j]))
        	{
        	int l=a[i].length();
        	int l1=arr[j].length();
        	int l2=brr[j].length();
        	if(l==l1&&l<l2)
        	{
        	  st=st+arr[j]+" ";
            }
        	else if(l==l1&&l>l2)
        	{
        		st=st+brr[j]+" ";
        	}
        	else if(l==l2&&l<l1)
        	{
        		st=st+brr[j]+" ";
        	}
        	else if(l==l2&&l>l1)
        	{
        		st=st+arr[j]+" ";
        	}
        	else if(l==l1&&l==l2)
        	{
        		st=st+arr[j]+" ";
        	}
            }  
        	}
        	}
        System.out.print(st);
	}
	

}
