import java.util.Scanner;
class countpatterns
{
	static int freq(String s,String t)
	    {
	        int count=0;
	        for(int i=0;i<s.length();i++)
	        {
	            for(int j=i+t.length()-1;j<s.length();j++)
	            {
	                if(s.substring(i,j+1).equals(t))
	                {
	                    count++;
	                    break;
	                }
	            }
	        }
	        return count;
	    }
	    public static void main(String args[])
	    {
	        Scanner sc=new Scanner(System.in);
	        System.out.println("Enter string");
	        String s=sc.next();
	        System.out.println("Enter no. of pattern");
	        int n=sc.nextInt();
	        System.out.println("Enter patterns");
	        String str[]=new String[n];
	        for(int i=0;i<n;i++)
	        str[i]=sc.next();
	        System.out.println("output");
	        for(int i=0;i<n;i++)
	        System.out.println(freq(s,str[i]));
	    }
}
