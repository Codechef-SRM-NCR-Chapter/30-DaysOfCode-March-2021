import java.util.*;
public class Pattern2
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        int k=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(i>=j)
                System.out.print((k++)+"\t");
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
