import java.util.*;
class ques1d17
{
    static void combinationUtil(int arr[], int data[], int start,int end, int index, int r,int t,ArrayList<String> str)
    {
        if (index == r)
        {
            int sum=0;
            for (int j=0; j<r; j++)
                sum+=data[j];
            if(sum==t)
            {
                str.add(Arrays.toString(data));
            }
            return;
        }
        for (int i=start; i<=end && end-i+1 >= r-index; i++)
        {
            data[index] = arr[i];
            combinationUtil(arr, data,i+1, end, index+1, r,t,str);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length of array n : ");
        int n=sc.nextInt();
        System.out.print("Enter integer k : ");
        int k=sc.nextInt();
        int a[]=new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        Arrays.sort(a);
        int data[]=new int[4];
        String in[]=new String[1000];
        ArrayList<String> str= new ArrayList<String>(n);
        combinationUtil(a,data,0,a.length-1,0,4,k,str);
        for(int i=0;i<str.size();i++)
        {
            int j=i+1;
            while(j<str.size())
            {
                if(str.get(i).equals(str.get(j)))
                str.remove(j);
                else
                j++;
            }
            System.out.println(str.get(i));
        }
    }
}
