import java.util.*;
public class Search
{
    public static void main()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the test String");
        String s=sc.nextLine();
        System.out.println("Enter the test cases");
        int n=sc.nextInt();
        sc.close();
        Scanner ss=new Scanner (System.in);
        int ans []=new int[n];
        int ll=n;
        while(n-->0)
        {
            System.out.println("Enter the String to search");
            String search=ss.next();
            int l=search.length();
            String w="";
            int c=0;
            for(int i=0;i<s.length()-l;i++)
            {
                w=s.substring(i,i+l);
                if(w.compareToIgnoreCase(search)==0)
                    c++;
            }
            ans[n]=c;
        }
        for(int j=ll-1;j>=0;j--)
            System.out.println(ans[j]);
    }
}
