import java.util.*;
class shaurya
{
    public static int fact(int n)
    {
        int x,p=1;
        for(x=n;x>=1;x--)
        p=p*x;
        return p;
    }
    public static int combination(int n)
    {
        int numerator=fact(n);
        int den1=fact(n-2);
        int den2=fact(2);
        int ret=(numerator)/(den1*den2);
        return ret;
    }
    public static int min(int k,int l)
    {
        if(k>l)
        {
            return l;
        }
        else
        {
            return k;
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the even number of terms you want in the array ");
        int n=sc.nextInt();
        int x,y,z;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter the value");
            arr[x]=sc.nextInt();
        }
        int comb=combination(n);
        int c=0;
        // System.out.println(comb);
        int[] arcomb=new int[2*comb];
        for(x=0;x<n;x++)
        {
            for(y=x+1;y<n;y=y+1)
            {
                arcomb[c]=arr[x];
                c++;
                arcomb[c]=arr[y];
                c++;
            }
        }
        int a,b;
        int q,w,sum=0,r;
       // for(x=0;x<2*comb;x++)
       // System.out.print(arcomb[x]);
       for(x=0;x<(2*comb)-1;x=x+2)
       {
           a=arcomb[x];
           b=arcomb[x+1];
           for(y=0;y<(2*comb)-1;y=y+2)
           {
               if(a!=arcomb[y]&&a!=arcomb[y+1])
               {
                   if(b!=arcomb[y]&&b!=arcomb[y+1])
                   {
                       q= min(a,b);
                       w=min(arcomb[y],arcomb[y+1]);
                        if((q+w)>sum)
                        sum=(q+w);
                   }
               }
           }
       }
       System.out.println(sum);
    }
}
