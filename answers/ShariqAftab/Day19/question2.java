import java.util.Scanner;
public class sum
{
    public static void main(String[] args)  
    { 
        Scanner sr = new Scanner(System.in);
        int n = sr.nextInt();
        int x = sr.nextInt();
        int a[] = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i] = sr.nextInt();
        }
        int temp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if( a[i] + a[j] + a[k] < x)
                        temp++;
                }
            }
        }

        if(temp==0)
            System.out.println("no such triplet present");
            else
            System.out.println(temp);
    }
}
