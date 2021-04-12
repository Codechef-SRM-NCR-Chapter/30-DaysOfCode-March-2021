import java.util.*;
class ques2d24
{
    static void half(int a[])
    {
        for(int i=0;i<a.length;i++)
        a[i]=a[i]/2;
    }
    static int dec(int a)
    {
        return a-1;
    }
    static int steps(int a[],int c)
    {
        int j=0;
        for(j=0;j<a.length;j++)
        {
            if(a[j]==0)
            continue;
            else
            break;
        }
        if(j==a.length)
        return c;
        for(int i=0;i<a.length;i++)
        {
            if(a[i]%2!=0)
            {
                a[i]=dec(a[i]);
                c++;
            }
        }
        j=0;
        for(j=0;j<a.length;j++)
        {
            if(a[j]==0)
            continue;
            else
            break;
        }
        if(j==a.length)
        return c;
        half(a);
        c++;
        return steps(a,c);
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter number array in form [n1,n2,n3,..] : ");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        System.out.println("OUTPUT : "+steps(n,0));
    }
}
