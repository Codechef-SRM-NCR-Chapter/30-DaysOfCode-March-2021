public class Summision
{
   

    public static void main(String[]args)
    {
       Scanner sc= new Scanner(System.in);
       System.out.println("Enter the size of the first Array");
      int s1=sc.nextInt();
      System.out.println("Enter the size of the Second Array");
      int s2=sc.nextInt();
      int arr1[]=new int[s1];
      int arr2[s2]=new int[s2];
      System.out.prinln("Enter the elements of he first Array");
      for(int i=0;i<s1;i++)
        arr1[i]=sc.nextInt();
      System.out.prinln("Enter the elements of he Second Array");
      for(int i=0;i<s2;i++)
        arr2[i]=sc.nextInt();
        int n=Math.max(arr1.length,arr2.length);
        int res[]=new int[n];
        arrSum(arr1,arr2,0,res);
        for(int i:res)
            System.out.print(i+" , ");
    }
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
}
