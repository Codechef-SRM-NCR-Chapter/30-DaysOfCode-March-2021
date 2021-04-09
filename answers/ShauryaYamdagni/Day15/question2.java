import java.util.*;
class shaurya
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x,y,z;
        System.out.println("Enter the number of rows ");
        int m=sc.nextInt();
        System.out.println("ENter the number of columns ");
        int n=sc.nextInt();
        // int[][] arr=new int[m][n];
        // for(x=0;x<m;x++)
        // {
        //     for(y=0;y<n;y++)
        //     {
        //         arr[m][n]=0;
        //     }
        // }
        int row=0;
        for(x=0;x<n;x++)
        {
            System.out.print("( "+row+" , "+x+" )");
            System.out.print(" --> ");
        }
        int column=m-1;
        for(x=1;x<n;x++)
        {
            System.out.print("( "+x+" , "+column+" )");
            if(x!=n-1)
            System.out.print(" --> ");

        }
        System.out.println();
        System.out.println("Second path is ");
        column=0;
        for(x=0;x<n;x++)
        {
            System.out.print("( "+x+" , "+column+" )");
            System.out.print(" --> ");
        }
        row=n-1;
        for(x=1;x<n;x++)
        {
            System.out.print("( "+row+" , "+x+" )");
            if(x!=n-1)
            System.out.print(" --> ");
        }
    }
}
