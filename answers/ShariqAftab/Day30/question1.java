    import java.util.*;
     
    public class CF {
     
    	public static void main(String[] args) {
    		Scanner sc=new Scanner(System.in);
    		int n=sc.nextInt();
    		int m=sc.nextInt();
    		HashMap<String,String> map=new HashMap<>();
    		for(int i=0;i<m;i++)
    		{
    			String s1=sc.next();
    			String s2=sc.next();
    			map.put(s1,s1.length()>s2.length()?s2:s1);
    		}
    					
    		for(int i=0;i<n;i++)
    		{
    			System.out.print(map.get(sc.next())+" ");
    		}
    		
    	}
    }

