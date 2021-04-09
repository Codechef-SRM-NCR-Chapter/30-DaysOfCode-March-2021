import java.util.*;
class ques2d17
{
    static int sub(int a[])
    {
        int c=0;
        for(int i=0;i<a.length;i++)
        {
            int sum=a[i];
            for(int j=i+1;j<a.length;j++)
            {
                sum=sum+a[j];
                if(sum==0)
                c++;
            }
        }
        return c;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of array n : ");
        int n=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        System.out.println(sub(a));
    }
}
