import java.util.*;
class ques1d27
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("INPUT : ");
        System.out.print("Enter length of array, rotation count and no. of queries separated by space : ");
        int l=sc.nextInt();
        int r=sc.nextInt();
        int q=sc.nextInt();
        System.out.print("Enter array elements : ");
        int a[]=new int[l];
        int qu[]=new int[q];
        for(int i=0;i<l;i++)
        a[i]=sc.nextInt();
        System.out.println("Enter queries");
        for(int i=0;i<q;i++)
        qu[i]=sc.nextInt();
        for(int i=0;i<r;i++)
        {
            int temp=a[l-1];
            for(int j=l-1;j>0;j--)
            a[j]=a[j-1];
            a[0]=temp;
        }
        System.out.println("OUTPUT : ");
        for(int i=0;i<q;i++)
        System.out.println(a[qu[i]]);
    }
}
