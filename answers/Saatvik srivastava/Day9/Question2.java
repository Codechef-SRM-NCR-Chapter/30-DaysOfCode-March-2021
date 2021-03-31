import java.util.*;
public class day9q2

{
    public static void mian()
    {
        int sum=0;
        int i,j,k;
        Scanner sc= new Scanner (System.in);
        System.out.println("Enter the size of the array");
        int size=sc.nextInt();
        int num[]=new int [size];
        System.out.println("Enter the elements of the array");
        for( i=0;i<size;i++)
            num[i]=sc.nextInt();
       int max=Integer.MIN_VALUE;        
        for ( i=0; i <size; i++)
        {
            for ( j=i; j<size; j++)
            {
                for ( k=i; k<=j; k++)
                    sum=sum+num[k];
                if(sum>max)
                {
                   max=sum;
                }
                sum=0;
            }
        }
        System.out.println("THE LARGEST SUM = "+max);
    }

}
