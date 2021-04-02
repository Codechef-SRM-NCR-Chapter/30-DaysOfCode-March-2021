import java.util.*;
class ques2d16
{
    static int bs(int a[],int s,int e,int k)
    {
        if(s>e)
        return -1;
        else
        {
            int m=(s+e)/2;
            if(a[m]==k && k>a[m-1])
            return m;
            if(a[m]<k)
            return bs(a,m+1,e,k);
            else
            return bs(a,s,m-1,k);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] ar=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        ar[i]=Integer.valueOf(arr[i]);
        if(bs(ar,0,ar.length-1,1)==-1)
        System.out.println("NOT FOUND");
        else
        System.out.println(bs(ar,0,ar.length-1,1));
    }
}
