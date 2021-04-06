import java.util.*;
class ques2d19
{
    static void combinationUtil(int arr[], int data[], int start,int end, int index, int r,int t,int c[])
    {
        if (index == r)
        {
            int sum=0;
            for (int j=0; j<r; j++)
                sum+=data[j];
            if(sum<t)
            {
                c[0]+=1;
            }
            return;
        }
        for (int i=start; i<=end && end-i+1 >= r-index; i++)
        {
            data[index] = arr[i];
            combinationUtil(arr, data,i+1, end, index+1, r,t,c);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of array n : ");
        int n=sc.nextInt();
        System.out.print("Enter integer x : ");
        int x=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        int data[]=new int[3];
        int c[]=new int[1];
        c[0]=0;
        combinationUtil(a,data,0,a.length-1,0,3,x,c);
        System.out.println("OUTPUT : "+c[0]);
    }
}
