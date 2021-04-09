import java.util.*;
class ques2d14
{
    static void add(int a[],int b[],int c[],int i)
    {
        if(i>=a.length || i>=b.length)
        {
            if(i>=a.length && i>=b.length)
            return;
            if(a.length>b.length)
            {
                c[i]=a[i];
                add(a,b,c,i+1);
            }
            else if(a.length<b.length)
            {
                c[i]=b[i];;
                add(a,b,c,i+1);
            }
        }
        else
        {
            c[i]=a[i]+b[i];
            add(a,b,c,i+1);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array1 in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        System.out.println("Enter array2 in form [n1,n2,n3,..]");
        s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr2=s.split(",");
        int[] n2=new int[arr2.length];
        for(int i=0;i<arr2.length;i++)
        n2[i]=Integer.valueOf(arr2[i]);
        int m=0;
        if(n.length>n2.length)
        m=n.length;
        else
        m=n2.length;
        int c[]=new int[m];
        add(n,n2,c,0);
        System.out.println(Arrays.toString(c));
    }
}
