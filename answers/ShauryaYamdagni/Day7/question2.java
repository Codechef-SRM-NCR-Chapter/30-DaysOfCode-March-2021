import java.util.*;
class shaurya
{
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of terms in the array");
        int n=sc.nextInt();
        int x;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            System.out.println("enter "+x+" index value");
            arr[x]=sc.nextInt();
        }
        System.out.println("enter the value of A");
        int a =sc.nextInt();
        System.out.println("enter the value of B");
        int b=sc.nextInt();
        System.out.println("enter the value of C");
        int c=sc.nextInt();
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(Math.abs((arr[i]-arr[j]))<=a)
                {
                    for(k=j+1;k<n;k++)
                    {
                        if(Math.abs((arr[j]-arr[k]))<=b)
                        {
                            if(Math.abs((arr[i]-arr[k]))<=c)
                            {
                                System.out.println("( "+arr[i]+" ,"+arr[j]+" ,"+arr[k]+" ) ,");
                            }
                        }
                    }
                }
            }
        }
    }
}
