import java.util.*;
class compare_languages
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n");
		int n=sc.nextInt();
		System.out.println("Enter m");
		int m=sc.nextInt();
		String a[]=new String[m];
		String b[]=new String[m];
		System.out.println("Enter words");
		for(int i=0;i<m;i++)
		{
			a[i]=sc.next();
			b[i]=sc.next();
		}
		sc.nextLine();
		System.out.println("Enter string of length n");
		String s=sc.nextLine();
		String[] c=s.split("\\s");
		String k="";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
		    {
				if((c[i].equals(a[j]))||(c[i].equals(b[j])))
				k=k+((a[j].length()<b[j].length())?a[j]:b[j])+" ";
			}
		}
		System.out.println(k);
	}
}





