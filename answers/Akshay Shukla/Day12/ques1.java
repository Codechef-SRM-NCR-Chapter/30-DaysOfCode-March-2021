import java.util.*;
class ques1d12
{
    static String op1(String s,int k,char x)
    {
        s=s.substring(0,k-1)+x+s.substring(k);
        return s;
    }
    static void op2(String s,int a,int b)
    {
        int ar[]=new int[26];
        s=s.toUpperCase();
        for(int i=65;i<=90;i++)
        {
            for(int j=a-1;j<b;j++)
            {
                if((int)s.charAt(j)==i)
                ar[i-65]++;
            }
        }
        int c=0;
        for(int i=0;i<26;i++)
        {
            if(ar[i]%2!=0)
            c++;
            if(c>1)
            {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length of string and no. of operations in form : n l");
        String s=sc.nextLine();
        int n=Integer.valueOf(String.valueOf(s.charAt(0)));
        int l=Integer.valueOf(String.valueOf(s.charAt(2)));
        System.out.println("Enter String");
        String str=sc.nextLine();
        System.out.println("Enter operations in form : 1 K X  or  2 A B");
        String op[]=new String[l];
        for(int i=0;i<l;i++)
          op[i]=sc.nextLine();
        for(int i=0;i<l;i++)
        {
             int o=Integer.valueOf(String.valueOf(op[i].charAt(0)));
             int ka=Integer.valueOf(String.valueOf(op[i].charAt(2)));
             if(o==1)
             {
                 char x=op[i].charAt(4);
                 str=op1(str,ka,x);
             }
             if(o==2)
             {
                 int b=Integer.valueOf(String.valueOf(op[i].charAt(4)));
                 op2(str,ka,b);
             }
        }      
   
    }
}
