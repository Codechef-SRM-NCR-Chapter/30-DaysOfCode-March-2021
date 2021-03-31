public class ArraySum1
{
    public static int[] arrSum(int arr1[],int arr2[],int strt,int[] res)
    {
        if(arr1.length>arr2.length)
        {
            if(strt==arr1.length)
                return res;
            if(strt<arr2.length)    
            {
                res[strt]=arr1[strt]+arr2[strt];
                arrSum(arr1,arr2,strt+1,res);
            }
            else
            {
                res[strt]=arr1[strt];    
                arrSum(arr1,arr2,strt+1,res);
            }
            return res;
        }
        else
        {
            if(strt==arr2.length)
                return res;
            else if(strt<arr1.length)
            {
                res[strt]=arr1[strt]+arr2[strt];
                arrSum(arr1,arr2,strt+1,res);
            }
            else
            {
                res[strt]=arr2[strt]; 
                arrSum(arr1,arr2,strt+1,res);
            }
            return res;
        }
    }

    public static void main(String[]args)
    {
        int arr1[]={23,5,7,2,7,87};
        int arr2[]={4,67,2,8};
        int n=Math.max(arr1.length,arr2.length);
        int res[]=new int[n];
        arrSum(arr1,arr2,0,res);
        for(int i:res)
            System.out.print(i+" , ");
    }
}

