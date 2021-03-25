import java.util.*;
class ques1d9
{
    static void combinationUtil(int arr[], int data[],int ind[], int start,int end, int index, int r,int t)
    {
        if (index == r)
        {
            int sum=0;
            for (int j=0; j<r; j++)
                sum+=data[j];
            if(sum==t)
            {
                System.out.print("[");
                for (int j=0; j<r; j++)
                {
                    if(j==r-1)
                    System.out.print(ind[j]+"");
                    else
                    System.out.print(ind[j]+",");
                }
                System.out.print("]");
            }
            return;
        }
        for (int i=start; i<=end && end-i+1 >= r-index; i++)
        {
            data[index] = arr[i];
            ind[index] = i;
            combinationUtil(arr, data, ind,i+1, end, index+1, r,t);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array in form [n1,n2,n3,..]");
        String s=sc.nextLine();
        s=s.substring(1,s.length()-1);
        String[] arr=s.split(",");
        int[] n=new int[arr.length];
        for(int i=0;i<arr.length;i++)
        n[i]=Integer.valueOf(arr[i]);
        System.out.println("Enter target");
        int t=sc.nextInt();
        for(int i=1;i<=n.length;i++)
        {
            int data[]=new int[i];
            int ind[]=new int[i];
            combinationUtil(n,data,ind,0,n.length-1,0,i,t);
        }
    }
}
