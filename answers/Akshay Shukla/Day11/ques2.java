import java.util.*;
class ques2d11
{
    public static int freq(String s,String c)
    {
        int f=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+c.length()-1;j<s.length();j++)
            {
                if(s.substring(i,j+1).equals(c))
                {
                    f++;
                    break;
                }
            }
        }
        return f;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter string");
        String s=sc.next();
        System.out.println("Enter no. of pattern");
        int k=sc.nextInt();
        System.out.println("Enter patterns");
        String str[]=new String[k];
        for(int i=0;i<k;i++)
        str[i]=sc.next();
        for(int i=0;i<k;i++)
        System.out.println(freq(s,str[i]));
    }
}
