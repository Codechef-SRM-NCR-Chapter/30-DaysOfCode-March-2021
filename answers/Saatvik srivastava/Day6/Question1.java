import java.util.*;
class Day6q1
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number of terms in the array");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.println("CANDIES");
        for(int i=0;i<n;i++)
        {
            
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the number of extra candies");
        int extra_candies =sc.nextInt();
        int larg=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>larg)
            larg=arr[j];
        }
        Boolean f[] =new Boolean[n];
        for(int k=0;k<n;k++)
        {
            if((arr[k]+extra_candies )>=larg)
            f[k]=true;
            else 
            f[k]=false;
        }
        for(int x=0;x<n;x++) 
            System.out.println(f[x]);
        }
    }
