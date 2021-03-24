import java.util.*;
class Question_1
{
    static int NUMS[];
    static int INDEX[];
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length of arrays : ");
        int n = sc.nextInt();
        NUMS = new int[n];INDEX=new int[n];
        for(int i = 0;i<n;i++)
        {
            System.out.println("Enter the element no. " + (i+1) + " for NUMS array");
            NUMS[i]=sc.nextInt();
            System.out.println("Enter the element no. " + (i+1) + " for INDEX array");
            INDEX[i]=sc.nextInt();
        }        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(INDEX[i], NUMS[i]);
        }
        int[] ans = new int[list.size()];
        System.out.print("OUTPUT : [");
        for (int i = 0; i < list.size()-1; i++)
        {
            ans[i] = list.get(i);
            System.out.print(ans[i]+", ");
        }
        System.out.print(list.get(list.size()-1)+"]");
    }
}
