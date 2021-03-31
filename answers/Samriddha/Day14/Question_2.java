import java.util.*;
class Question_2
{
    static int n,m; static int sum[];
    public static void summation(int a[], int b[])
    {
        for(int j = 0; j < sum.length; j++)
        {
            if(j<(m) && j<(n))
                sum[j]=a[j]+b[j];
            if(j>m-1)
                sum[j]=a[j];
            if(j>n-1)
                sum[j]=b[j];
        }
        System.out.print("The summation of both the arrays are : \n [");
        for(int j = 0; j < (sum.length - 1); j++)
        {
            System.out.print(sum[j]+", ");
        }
        System.out.print(sum[(sum.length - 1)]+"]");
    }
    public static void main(String[] args)
    {
        Question_2 obj = new Question_2();
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the length for first array : ");
        n=sc.nextInt();
        System.out.print("Enter the length for second array : ");
        m=sc.nextInt();
        int a[]=new int[n];
        int b[]=new int[m];
        System.out.print("Enter the no. of elements for first array \n");
        for(int i=0;i<n;i++)
        {
            System.out.print("Enter element no."+(i+1)+" for first array : ");
            a[i]=sc.nextInt();
        }
        System.out.print("Enter the no. of elements for second array \n");
        for(int i=0;i<m;i++)
        {
            System.out.print("Enter element no."+(i+1)+" for second array : ");
            b[i]=sc.nextInt();
        }
        if(n==m||n>m)
            sum=new int[n];
        else
            sum=new int[m];
        obj.summation(a, b);
    }
}
