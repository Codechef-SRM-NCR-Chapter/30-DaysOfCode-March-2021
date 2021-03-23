import java.util.*;
public class ArrayLi
{
    public static void main()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Give the target array size ");
        int n=sc.nextInt();
        int num[]=new int[n];
        int index[]=new int[n];
        System.out.println("Enter the \"num\" Array");
        for(int i=0;i<n;i++)
            num[i]=sc.nextInt();
        System.out.println("Enter the \"index\" Array");
        for(int i=0;i<n;i++)
            index[i]=sc.nextInt();
        ArrayList<Integer> targetArray=new ArrayList<>();
        for(int i=0;i<n;i++)
            targetArray.add(index[i],num[i]);
        System.out.println(targetArray);
    }
}

