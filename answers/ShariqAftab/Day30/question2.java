    import java.util.*;
     
    public class SUbString {
     
    	public static void main(String[] args) {
    		Scanner sc = new Scanner(System.in);
    		String s = sc.next();
    		int p = 0, q= 0;
    		for(int i = 0 ; i < s.length() ;i++ ) {
    			if(s.charAt(i) == '4')p++;
    			else if(s.charAt(i) == '7')q++;
    			
    		} System.out.println(p == 0 && q == 0 ? -1 : p >= q ? 4 : 7);
    		
    		
    		sc.close();
    	}
     
    }

