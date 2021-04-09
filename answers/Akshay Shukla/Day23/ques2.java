import java.util.*;
class ques2d23
{
    static int nth(int n)
    {
         int arr[] = new int[n + 1];
        arr[1] = 1;
        arr[2] = 2;
  
        for (int i = 3; i <= n; i++) {
            
            if (i % 2 != 0)
                arr[i] = arr[i / 2] * 10 + 1;
            else
                arr[i] = arr[(i / 2) - 1] * 10 + 2;
        }
        return arr[n];
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of test case : ");
        int t=sc.nextInt();
        System.out.println("Enter integer n : ");
        int n[]=new int[t];
        for(int i=0;i<t;i++)
            n[i]=sc.nextInt();
        for(int i=0;i<t;i++)
            System.out.println(nth(n[i]));
    }
}
