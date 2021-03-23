import java.util.*;
public class GoodTrip
{
    public static void main()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the size of the array ");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("A :");
        int A=sc.nextInt();
        System.out.println("B :");
        int B=sc.nextInt();
        System.out.println("C :");
        int C=sc.nextInt();
        int count=0;
        for(int i=0;i<n-3;i++)
            for(int j=i+1;j<n-2;j++)
                for(int k=j+1;k<n;k++)
                {
                    int a=Math.abs(arr[i]-arr[j]);
                    int b=Math.abs(arr[j]-arr[k]);
                    int c=Math.abs(arr[i]-arr[k]);
                    if(a<=A&&b<=B&&c<=C)
                        count++;
                }
        System.out.println("Number of good triplet : "+count);
    }
}

