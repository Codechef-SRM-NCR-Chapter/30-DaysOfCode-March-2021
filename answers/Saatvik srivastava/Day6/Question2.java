import java.util.*;
class Day6q2
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER NUMBER OF TERMS");
        int n=sc.nextInt();
        int i,j,k;
        int[] arr=new int[n];
        int sum=0;
        System.out.println("ENTER ARRAY VALUES");
        for(i=0;i<n;i++)
        {
            
            arr[i]=sc.nextInt();
            sum=sum+arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+2;j<n;j=j+2)
            {
                for(k=i;k<=j;k++)
                {
                    sum=sum+arr[k];
                }
            }
        }
        System.out.println(sum);
    }
}
