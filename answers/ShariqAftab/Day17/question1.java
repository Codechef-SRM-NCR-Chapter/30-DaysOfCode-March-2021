import java.util.*;
public  class SumArray
{
    public static int[] sum(int n[],int k)   
    {
        //ArrayList<Integer> arr=new ArrayList<>();
        int l=n.length;
        int c=0;
        int arr[]=new int[4];
        for(int i=0;i<l;i++)
        {
            if(n[i]<=k)
            {
                arr[c]=n[i];
                k=k-arr[i];
                c++;
            }
            if(k<=0)
                break;

        }
        return arr;
    }

    public static void main(String[]args)
    {
        int n[]={0,0,2,1,1};
        int k=3;
        int arr[]=new int[4];
        arr=sum(n,k);
        for (int i = 0; i < arr.length;i++) 
        {               
            System.out.print(arr[i]+" ");         
        }   
    }
}
