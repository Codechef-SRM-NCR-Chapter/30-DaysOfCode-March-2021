import java.util.*;
class ques2d18
{
    static int count(String s,int i,int c)
    {
        if(i==s.length())
         return c;
        if(s.charAt(i)=='1')
         return count(s,i+1,c+1);
        else
         return count(s,i+1,c);
    }
    static String binary(int n,String s)
    {
        if(n/2==0)
         return n%2+s;
        else
         return binary(n/2,n%2+s);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter num in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        String[] b=new String[arr.length];
        int[] c=new int[arr.length];
        int max=0;
        for(int i=0;i<arr.length;i++)
        {
            n[i]=Integer.valueOf(arr[i]);
            b[i]=binary(n[i],"");
            c[i]=count(b[i],0,0);
            if(max<c[i])
            max=c[i];
        }
        for(int i=0;i<arr.length;i++)
        {
            for(int j=0;j<arr.length;j++)
            {
                if(c[j]==max)
                System.out.print(n[j]+" ");
            }
            max--;
        } 
    }
}
