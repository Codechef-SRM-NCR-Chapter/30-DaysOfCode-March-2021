import java.util.Scanner;

public class pangram {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();int f=0;
        String alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String alpha1="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<alpha.length();i++)
        {
        	for(int j=0;j<str.length();j++)
        	{
        		if(str.charAt(j)!=' ')
        		{
        		if(alpha.charAt(i)==str.charAt(j)||alpha1.charAt(i)==str.charAt(j))
        		{
        			f=0;break;
        		}
        		else
        		{
        			f=1;
        		}
        		
        }}
        	if(f==1)
        	{
        		break;
        	}
	}
        if(f==0)
        {
        	System.out.print("PANGRAM EXISTS");
        }
        else if(f==1)
        {
        	System.out.print("PANGRAM DOES NOT EXISTS");
        }

}
}
