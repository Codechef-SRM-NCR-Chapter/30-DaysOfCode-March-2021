import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String s=sc.nextLine();
        s=s.toLowerCase();
        System.out.println("enter the number of patterns you wanna find");
        int n=sc.nextInt();
        String[] starr=new String[n];
        int[] count=new int[n];
        int x,y,z;
        for(x=0;x<n;x++)
        {
            System.out.println("enter the pattern");
            starr[x]=sc.next();
        }
        for(x=0;x<n;x++)
        {
            count[x]=0;
        }
        String s1="";
        
        for(x=0;x<s.length();x++)
        {
            for(y=x;y<s.length();y++)
            {
                s1=s1+s.charAt(y);
                for(z=0;z<starr.length;z++)
                {
                    if(s1.equalsIgnoreCase(starr[z]))
                    count[z]++;
                }
            }
            s1="";
        }
        for(x=0;x<n;x++)
        System.out.println(count[x]);
    }
}
