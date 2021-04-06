import java.util.*;
class ques1d19
{
    static int miss(int ar[],int a[])
    {
        for(int i=0;i<a.length;i++)
        {
            int c=0;
            for(int j=0;j<a.length;j++)
            {
                if(a[i]==ar[j])
                c++;
            }
            if(c==0)
            return a[i];
        }
        return -1;
    }
    static int rep(int ar[],int a[])
    {
        for(int i=0;i<a.length;i++)
        {
            int c=0;
            for(int j=0;j<a.length;j++)
            {
                if(a[i]==ar[j])
                c++;
            }
            if(c>1)
            return a[i];
        }
        return -1;
    }
    static void set(int a[],int n)
    {
        if(n==0)
        return;
        else
        {
            a[n-1]=n;
            set(a,n-1);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of array n : ");
        int n=sc.nextInt();
        int ar[]=new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++)
        ar[i]=sc.nextInt();
        Arrays.sort(ar);
        int a[]=new int[n];
        set(a,n);
        if(miss(ar,a)==-1)
        System.out.println("No missing or repeated");
        else
        System.out.println("Repeated = "+rep(ar,a)+" , "+"Missed = "+miss(ar,a));
    }
}
