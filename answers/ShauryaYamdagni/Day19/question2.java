import java.util.*;
class shaurya
{
    public static void main (String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter the number of elements in an array");
        int n=sc.nextInt();
        System.out.println("ENter the sum you want");
        int k = sc.nextInt();
        int w,x,y,z;
        int[] arr=new int[n];
        for(x=0;x<n;x++)
        {
            arr[x]=sc.nextInt();
        }
        System.out.println("the elments are :-");System.out.println();
        String s="";int c=0;
        for(w=0;w<n;w++)
        {
            for(x=w+1;x<n;x++)
            {
                for(y=x+1;y<n;y++)
                {
                        if( w!=x && x!=y )
                        {
                                if( (arr[w]+arr[x]+arr[y]) < k )
                                {
                                    System.out.println(arr[w]+" , "+ arr[x]+" , "+ arr[y]);c++;
                                }
                        }
                }
            }
        }
        System.out.println();
        System.out.println("the sum is ");
        System.out.println(c);
    }
}
