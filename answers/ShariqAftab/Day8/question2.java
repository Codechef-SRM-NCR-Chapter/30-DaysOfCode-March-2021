import java.util.HashMap;
import java.util.*;
public class NonDuplicateSum {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<Integer>();
        System.out.println("Enter the size of number array:");
        int n=sc.nextInt();
        int num[]= new int[n];
        int k;
        System.out.println("Enter the elements in the number array:");
        for(k=0;k<n;k++)
        {
            num[k]=sc.nextInt();
        }
        //int num[]= {1,2,3,2};
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i:num)
        {
            if(map.containsKey(i))
                map.put(i, map.get(i)+1);
            else

                map.put(i, 1);
        }
        int sum=0,val;
        for(int j:num)
        {
            val=map.get(j);
            if(val==1)
                sum+=j;
        }
        System.out.print("Output = "+sum);

    }

}
