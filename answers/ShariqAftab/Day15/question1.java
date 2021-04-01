import java.util.*;
public class Paths
{
    static int M,N;
    public static void main()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the dimention of the array");
        M=sc.nextInt();
        N=sc.nextInt();
        int arr[][]=new int [M][N];
        int path[][]=new int [M][N];
        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
                path[i][j]=0;
        printAllPaths(path,0,0);
    }

    public static void printAllPaths (int path[][],int i,int j)
    {
        if(i>M-1||i>N-1||j>M-1||j>N-1||path[i][j]==1)
            return;
        path[i][j]=1;
        if(i==M-1&&j==N-1)
        {
            for(int r=0;r<M;r++)
            {
                for(int c=0;c<N;c++)
                    if(path[r][c]==1)
                    System.out.print("("+r+","+c+")");
            }
            System.out.println();
            path[i][j]=0;
        }
        printAllPaths(path,i,j+1);
        printAllPaths(path,i+1,j);
        path[i][j]=0;
    }
}
